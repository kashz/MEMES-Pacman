#ifndef __SD_H__
#define __SD_H__

#define	SD_CD		(PE.DR.BIT.B11)
#define	SD_CS		(PE.DR.BIT.B9)


unsigned char SPI_tx_rx(unsigned char ch);
int card_exist();
unsigned char SD_send_cmd(unsigned char cmd, int arg);
int Enter_SPI_mode();

#endif /* __SD_H__ */
