#include "sd.h"

unsigned char SPI_tx_rx(unsigned char ch) {
    // Transmit
    while (!SCI2.SCSSR.BIT.TDRE) ;
    SCI2.SCTDR = ch;
    SCI2.SCSSR.BIT.TDRE = 0;

    // Receive
    while (!SCI2.SCSSR.BIT.RDRF) ;
    ch = SCI2.SCRDR;
    SCI2.SCSSR.BIT.RDRF = 0;
    return (ch);
}

int card_exist() {
    return (PE.DR.BIT.B11 ? 0 : 1);
}

unsigned char calc_CRC7(unsigned char *data, int len) {
    int i, j;
    char crc, dt;

    crc = 0;
    for (i = 0; i < len; i++) {
        dt = *data++;
        for (j = 0; j < 8; j++) {
            crc <<=1;
            if ((crc & 0x80) ^ (dt & 0x80))
                crc ^= 0x09;
            dt <<= 1;
        }
    }
    return (crc & 0x7f);
}
unsigned char SD_send_cmd(unsigned char cmd, int arg) {
	int i;
	unsigned char cmd_token[6], ret;

	while (1) {
		if (SPI_tx_rx(0xff) == 0xff)
			break;
	}

	cmd_token[0] = cmd;
	cmd_token[1] = (arg >> 24) & 0xff;
	cmd_token[2] = (arg >> 16) & 0xff;
	cmd_token[3] = (arg >> 8) & 0xff;
	cmd_token[4] = arg & 0xff;
	cmd_token[5] = (calc_CRC7(cmd_token, 5) << 1) | 0x01;

	for (i = 0; i < 6; i++)
		SPI_tx_rx(cmd_token[i]);

	do {
		ret = SPI_tx_rx(0xff);
	} while (ret & 0x80);

	return (ret);
}

int Enter_SPI_mode() {
	int i;
	unsigned char ret;

	SD_CS = 1;				// CS negate

	for (i = 0; i < 10; i++)
		SPI_tx_rx(0xff);

	SD_CS = 0;				// CS assert

	ret = SD_send_cmd(0x40, 0);
	if (ret != 0x01)
		return (-1);

	do {
		ret = SD_send_cmd(0x41, 0);
	} while (ret != 0x00);

	return (1);
}
