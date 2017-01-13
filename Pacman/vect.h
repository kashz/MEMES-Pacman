/***********************************************************************/
/*                                                                     */
/*  FILE        :vect.h                                                */
/*  DATE        :Fri, Jan 13, 2017                                     */
/*  DESCRIPTION :Definition of Vector                                  */
/*  CPU TYPE    :SH7085                                                */
/*                                                                     */
/*  This file is generated by Renesas Project Generator (Ver.4.19).    */
/*  NOTE:THIS IS A TYPICAL EXAMPLE.                                    */
/***********************************************************************/





//;<<VECTOR DATA START (POWER ON RESET)>>
//;0 Power On Reset PC
extern void PowerON_Reset_PC(void);

//;<<VECTOR DATA END (POWER ON RESET)>>
// 1 Power On Reset SP

//;<<VECTOR DATA START (MANUAL RESET)>>
//;2 Manual Reset PC
extern void Manual_Reset_PC(void);

//;<<VECTOR DATA END (MANUAL RESET)>>
// 3 Manual Reset SP

// 4 Illegal code
#pragma interrupt INT_Illegal_code
extern void INT_Illegal_code(void);

// 5 Reserved

// 6 Illegal slot
#pragma interrupt INT_Illegal_slot
extern void INT_Illegal_slot(void);

// 7 Reserved

// 8 Reserved

// 9 CPU Address error
#pragma interrupt INT_CPU_Address
extern void INT_CPU_Address(void);

// 10 DMAC/DTC Address error
#pragma interrupt INT_DTC_Address
extern void INT_DTC_Address(void);

// 11 NMI
#pragma interrupt INT_NMI
extern void INT_NMI(void);

// 12 User breakpoint trap
#pragma interrupt INT_User_Break
extern void INT_User_Break(void);

// 13 Reserved

// 14 Reserved

// 15 Reserved

// 16 Reserved

// 17 Reserved

// 18 Reserved

// 19 Reserved

// 20 Reserved

// 21 Reserved

// 22 Reserved

// 23 Reserved

// 24 Reserved

// 25 Reserved

// 26 Reserved

// 27 Reserved

// 28 Reserved

// 29 Reserved

// 30 Reserved

// 31 Reserved

// 32 TRAPA (User Vecter)
#pragma interrupt INT_TRAPA32
extern void INT_TRAPA32(void);

// 33 TRAPA (User Vecter)
#pragma interrupt INT_TRAPA33
extern void INT_TRAPA33(void);

// 34 TRAPA (User Vecter)
#pragma interrupt INT_TRAPA34
extern void INT_TRAPA34(void);

// 35 TRAPA (User Vecter)
#pragma interrupt INT_TRAPA35
extern void INT_TRAPA35(void);

// 36 TRAPA (User Vecter)
#pragma interrupt INT_TRAPA36
extern void INT_TRAPA36(void);

// 37 TRAPA (User Vecter)
#pragma interrupt INT_TRAPA37
extern void INT_TRAPA37(void);

// 38 TRAPA (User Vecter)
#pragma interrupt INT_TRAPA38
extern void INT_TRAPA38(void);

// 39 TRAPA (User Vecter)
#pragma interrupt INT_TRAPA39
extern void INT_TRAPA39(void);

// 40 TRAPA (User Vecter)
#pragma interrupt INT_TRAPA40
extern void INT_TRAPA40(void);

// 41 TRAPA (User Vecter)
#pragma interrupt INT_TRAPA41
extern void INT_TRAPA41(void);

// 42 TRAPA (User Vecter)
#pragma interrupt INT_TRAPA42
extern void INT_TRAPA42(void);

// 43 TRAPA (User Vecter)
#pragma interrupt INT_TRAPA43
extern void INT_TRAPA43(void);

// 44 TRAPA (User Vecter)
#pragma interrupt INT_TRAPA44
extern void INT_TRAPA44(void);

// 45 TRAPA (User Vecter)
#pragma interrupt INT_TRAPA45
extern void INT_TRAPA45(void);

// 46 TRAPA (User Vecter)
#pragma interrupt INT_TRAPA46
extern void INT_TRAPA46(void);

// 47 TRAPA (User Vecter)
#pragma interrupt INT_TRAPA47
extern void INT_TRAPA47(void);

// 48 TRAPA (User Vecter)
#pragma interrupt INT_TRAPA48
extern void INT_TRAPA48(void);

// 49 TRAPA (User Vecter)
#pragma interrupt INT_TRAPA49
extern void INT_TRAPA49(void);

// 50 TRAPA (User Vecter)
#pragma interrupt INT_TRAPA50
extern void INT_TRAPA50(void);

// 51 TRAPA (User Vecter)
#pragma interrupt INT_TRAPA51
extern void INT_TRAPA51(void);

// 52 TRAPA (User Vecter)
#pragma interrupt INT_TRAPA52
extern void INT_TRAPA52(void);

// 53 TRAPA (User Vecter)
#pragma interrupt INT_TRAPA53
extern void INT_TRAPA53(void);

// 54 TRAPA (User Vecter)
#pragma interrupt INT_TRAPA54
extern void INT_TRAPA54(void);

// 55 TRAPA (User Vecter)
#pragma interrupt INT_TRAPA55
extern void INT_TRAPA55(void);

// 56 TRAPA (User Vecter)
#pragma interrupt INT_TRAPA56
extern void INT_TRAPA56(void);

// 57 TRAPA (User Vecter)
#pragma interrupt INT_TRAPA57
extern void INT_TRAPA57(void);

// 58 TRAPA (User Vecter)
#pragma interrupt INT_TRAPA58
extern void INT_TRAPA58(void);

// 59 TRAPA (User Vecter)
#pragma interrupt INT_TRAPA59
extern void INT_TRAPA59(void);

// 60 TRAPA (User Vecter)
#pragma interrupt INT_TRAPA60
extern void INT_TRAPA60(void);

// 61 TRAPA (User Vecter)
#pragma interrupt INT_TRAPA61
extern void INT_TRAPA61(void);

// 62 TRAPA (User Vecter)
#pragma interrupt INT_TRAPA62
extern void INT_TRAPA62(void);

// 63 TRAPA (User Vecter)
#pragma interrupt INT_TRAPA63
extern void INT_TRAPA63(void);

// 64 Interrupt IRQ0
#pragma interrupt INT_IRQ0
extern void INT_IRQ0(void);

// 65 Interrupt IRQ1
#pragma interrupt INT_IRQ1
extern void INT_IRQ1(void);

// 66 Interrupt IRQ2
#pragma interrupt INT_IRQ2
extern void INT_IRQ2(void);

// 67 Interrupt IRQ3
#pragma interrupt INT_IRQ3
extern void INT_IRQ3(void);

// 68 Interrupt IRQ4
#pragma interrupt INT_IRQ4
extern void INT_IRQ4(void);

// 69 Interrupt IRQ5
#pragma interrupt INT_IRQ5
extern void INT_IRQ5(void);

// 70 Interrupt IRQ6
#pragma interrupt INT_IRQ6
extern void INT_IRQ6(void);

// 71 Interrupt IRQ7
#pragma interrupt INT_IRQ7
extern void INT_IRQ7(void);

// 72 DMAC0 DEI0
#pragma interrupt INT_DMAC0_DEI0
extern void INT_DMAC0_DEI0(void);

// 73 Reserved

// 74 Reserved

// 75 Reserved

// 76 DMAC1 DEI1
#pragma interrupt INT_DMAC1_DEI1
extern void INT_DMAC1_DEI1(void);

// 77 Reserved

// 78 Reserved

// 79 Reserved

// 80 DMAC2 DEI2
#pragma interrupt INT_DMAC2_DEI2
extern void INT_DMAC2_DEI2(void);

// 81 Reserved

// 82 Reserved

// 83 Reserved

// 84 DMAC3 DEI3
#pragma interrupt INT_DMAC3_DEI3
extern void INT_DMAC3_DEI3(void);

// 85 Reserved

// 86 Reserved

// 87 Reserved

// 88 MTU0 TGIA0
#pragma interrupt INT_MTU0_TGIA0
extern void INT_MTU0_TGIA0(void);

// 89 MTU0 TGIB0
#pragma interrupt INT_MTU0_TGIB0
extern void INT_MTU0_TGIB0(void);

// 90 MTU0 TGIC0
#pragma interrupt INT_MTU0_TGIC0
extern void INT_MTU0_TGIC0(void);

// 91 MTU0 TGID0
#pragma interrupt INT_MTU0_TGID0
extern void INT_MTU0_TGID0(void);

// 92 MTU0 TCIV0
#pragma interrupt INT_MTU0_TCIV0
extern void INT_MTU0_TCIV0(void);

// 93 MTU0 TGIE0
#pragma interrupt INT_MTU0_TGIE0
extern void INT_MTU0_TGIE0(void);

// 94 MTU0 TGIF0
#pragma interrupt INT_MTU0_TGIF0
extern void INT_MTU0_TGIF0(void);

// 95 Reserved

// 96 MTU1 TGIA1
#pragma interrupt INT_MTU1_TGIA1
extern void INT_MTU1_TGIA1(void);

// 97 MTU1 TGIB1
#pragma interrupt INT_MTU1_TGIB1
extern void INT_MTU1_TGIB1(void);

// 98 Reserved

// 99 Reserved

// 100 MTU1 TCIV1
#pragma interrupt INT_MTU1_TCIV1
extern void INT_MTU1_TCIV1(void);

// 101 MTU1 TCIU1
#pragma interrupt INT_MTU1_TCIU1
extern void INT_MTU1_TCIU1(void);

// 102 Reserved

// 103 Reserved

// 104 MTU2 TGIA2
#pragma interrupt INT_MTU2_TGIA2
extern void INT_MTU2_TGIA2(void);

// 105 MTU2 TGIB2
#pragma interrupt INT_MTU2_TGIB2
extern void INT_MTU2_TGIB2(void);

// 106 Reserved

// 107 Reserved

// 108 MTU2 TCIV2
#pragma interrupt INT_MTU2_TCIV2
extern void INT_MTU2_TCIV2(void);

// 109 MTU2 TCIU2
#pragma interrupt INT_MTU2_TCIU2
extern void INT_MTU2_TCIU2(void);

// 110 Reserved

// 111 Reserved

// 112 MTU3 TGIA3
#pragma interrupt INT_MTU3_TGIA3
extern void INT_MTU3_TGIA3(void);

// 113 MTU3 TGIB3
#pragma interrupt INT_MTU3_TGIB3
extern void INT_MTU3_TGIB3(void);

// 114 MTU3 TGIC3
#pragma interrupt INT_MTU3_TGIC3
extern void INT_MTU3_TGIC3(void);

// 115 MTU3 TGID3
#pragma interrupt INT_MTU3_TGID3
extern void INT_MTU3_TGID3(void);

// 116 MTU3 TCIV3
#pragma interrupt INT_MTU3_TCIV3
extern void INT_MTU3_TCIV3(void);

// 117 Reserved

// 118 Reserved

// 119 Reserved

// 120 MTU4 TGIA4
#pragma interrupt INT_MTU4_TGIA4
extern void INT_MTU4_TGIA4(void);

// 121 MTU4 TGIB4
#pragma interrupt INT_MTU4_TGIB4
extern void INT_MTU4_TGIB4(void);

// 122 MTU4 TGIC4
#pragma interrupt INT_MTU4_TGIC4
extern void INT_MTU4_TGIC4(void);

// 123 MTU4 TGID4
#pragma interrupt INT_MTU4_TGID4
extern void INT_MTU4_TGID4(void);

// 124 MTU4 TCIV4
#pragma interrupt INT_MTU4_TCIV4
extern void INT_MTU4_TCIV4(void);

// 125 Reserved

// 126 Reserved

// 127 Reserved

// 128 MTU5 TGIU5
#pragma interrupt INT_MTU5_TGIU5
extern void INT_MTU5_TGIU5(void);

// 129 MTU5 TGIV5
#pragma interrupt INT_MTU5_TGIV5
extern void INT_MTU5_TGIV5(void);

// 130 MTU5 TGIW5
#pragma interrupt INT_MTU5_TGIW5
extern void INT_MTU5_TGIW5(void);

// 131 Reserved

// 132 POE OEI1
#pragma interrupt INT_POE_OEI1
extern void INT_POE_OEI1(void);

// 133 POE OEI3
#pragma interrupt INT_POE_OEI3
extern void INT_POE_OEI3(void);

// 134 Reserved

// 135 Reserved

// 136 Reserved

// 137 Reserved

// 138 Reserved

// 139 Reserved

// 140 Reserved

// 141 Reserved

// 142 Reserved

// 143 Reserved

// 144 Reserved

// 145 Reserved

// 146 Reserved

// 147 Reserved

// 148 Reserved

// 149 Reserved

// 150 Reserved

// 151 Reserved

// 152 Reserved

// 153 Reserved

// 154 Reserved

// 155 Reserved

// 156 IIC2 IINAKI
#pragma interrupt INT_IIC2_IINAKI
extern void INT_IIC2_IINAKI(void);

// 157 Reserved

// 158 Reserved

// 159 Reserved

// 160 MTU2S_3 TGIA_3S
#pragma interrupt INT_MTU2S_3_TGIA_3S
extern void INT_MTU2S_3_TGIA_3S(void);

// 161 MTU2S_3 TGIB_3S
#pragma interrupt INT_MTU2S_3_TGIB_3S
extern void INT_MTU2S_3_TGIB_3S(void);

// 162 MTU2S_3 TGIC_3S
#pragma interrupt INT_MTU2S_3_TGIC_3S
extern void INT_MTU2S_3_TGIC_3S(void);

// 163 MTU2S_3 TGID_3S
#pragma interrupt INT_MTU2S_3_TGID_3S
extern void INT_MTU2S_3_TGID_3S(void);

// 164 MTU2S_3 TCIV_3S
#pragma interrupt INT_MTU2S_3_TCIV_3S
extern void INT_MTU2S_3_TCIV_3S(void);

// 165 Reserved

// 166 Reserved

// 167 Reserved

// 168 MTU2S_4 TGIA_4S
#pragma interrupt INT_MTU2S_4_TGIA_4S
extern void INT_MTU2S_4_TGIA_4S(void);

// 169 MTU2S_4 TGIB_4S
#pragma interrupt INT_MTU2S_4_TGIB_4S
extern void INT_MTU2S_4_TGIB_4S(void);

// 170 MTU2S_4 TGIC_4S
#pragma interrupt INT_MTU2S_4_TGIC_4S
extern void INT_MTU2S_4_TGIC_4S(void);

// 171 MTU2S_4 TGID_4S
#pragma interrupt INT_MTU2S_4_TGID_4S
extern void INT_MTU2S_4_TGID_4S(void);

// 172 MTU2S_4 TCIV_4S
#pragma interrupt INT_MTU2S_4_TCIV_4S
extern void INT_MTU2S_4_TCIV_4S(void);

// 173 Reserved

// 174 Reserved

// 175 Reserved

// 176 MTU2S_5 TGIU_5S
#pragma interrupt INT_MTU2S_5_TGIU_5S
extern void INT_MTU2S_5_TGIU_5S(void);

// 177 MTU2S_5 TGIV_5S
#pragma interrupt INT_MTU2S_5_TGIV_5S
extern void INT_MTU2S_5_TGIV_5S(void);

// 178 MTU2S_5 TGIW_5S
#pragma interrupt INT_MTU2S_5_TGIW_5S
extern void INT_MTU2S_5_TGIW_5S(void);

// 179 Reserved

// 180 POE OEI2
#pragma interrupt INT_POE_OEI2
extern void INT_POE_OEI2(void);

// 181 Reserved

// 182 Reserved

// 183 Reserved

// 184 CMT0 CMI0
#pragma interrupt INT_CMT0_CMI0
extern void INT_CMT0_CMI0(void);

// 185 Reserved

// 186 Reserved

// 187 Reserved

// 188 CMT1 CMI1
#pragma interrupt INT_CMT1_CMI1
extern void INT_CMT1_CMI1(void);

// 189 Reserved

// 190 Reserved

// 191 Reserved

// 192 BSC CMI
#pragma interrupt INT_BSC_CMI
extern void INT_BSC_CMI(void);

// 193 Reserved

// 194 Reserved

// 195 Reserved

// 196 WDT ITI
#pragma interrupt INT_WDT_ITI
extern void INT_WDT_ITI(void);

// 197 Reserved

// 198 Reserved

// 199 Reserved

// 200 AD0 ADI0
#pragma interrupt INT_AD0_ADI0
extern void INT_AD0_ADI0(void);

// 201 AD1 ADI1
#pragma interrupt INT_AD1_ADI1
extern void INT_AD1_ADI1(void);

// 202 Reserved

// 203 Reserved

// 204 AD2 ADI2
#pragma interrupt INT_AD2_ADI2
extern void INT_AD2_ADI2(void);

// 205 Reserved

// 206 Reserved

// 207 Reserved

// 208 Reserved

// 209 Reserved

// 210 Reserved

// 211 Reserved

// 212 Reserved

// 213 Reserved

// 214 Reserved

// 215 Reserved

// 216 SCI0 ERI0
#pragma interrupt INT_SCI0_ERI0
extern void INT_SCI0_ERI0(void);

// 217 SCI0 RXI0
#pragma interrupt INT_SCI0_RXI0
extern void INT_SCI0_RXI0(void);

// 218 SCI0 TXI0
#pragma interrupt INT_SCI0_TXI0
extern void INT_SCI0_TXI0(void);

// 219 SCI0 TEI0
#pragma interrupt INT_SCI0_TEI0
extern void INT_SCI0_TEI0(void);

// 220 SCI1 ERI1
#pragma interrupt INT_SCI1_ERI1
extern void INT_SCI1_ERI1(void);

// 221 SCI1 RXI1
#pragma interrupt INT_SCI1_RXI1
extern void INT_SCI1_RXI1(void);

// 222 SCI1 TXI1
#pragma interrupt INT_SCI1_TXI1
extern void INT_SCI1_TXI1(void);

// 223 SCI1 TEI1
#pragma interrupt INT_SCI1_TEI1
extern void INT_SCI1_TEI1(void);

// 224 SCI2 ERI2
#pragma interrupt INT_SCI2_ERI2
extern void INT_SCI2_ERI2(void);

// 225 SCI2 RXI2
#pragma interrupt INT_SCI2_RXI2
extern void INT_SCI2_RXI2(void);

// 226 SCI2 TXI2
#pragma interrupt INT_SCI2_TXI2
extern void INT_SCI2_TXI2(void);

// 227 SCI2 TEI2
#pragma interrupt INT_SCI2_TEI2
extern void INT_SCI2_TEI2(void);

// 228 SCIF ERIF
#pragma interrupt INT_SCIF_ERIF
extern void INT_SCIF_ERIF(void);

// 229 SCIF RXIF
#pragma interrupt INT_SCIF_RXIF
extern void INT_SCIF_RXIF(void);

// 230 SCIF BRIF
#pragma interrupt INT_SCIF_BRIF
extern void INT_SCIF_BRIF(void);

// 231 SCIF TXIF
#pragma interrupt INT_SCIF_TXIF
extern void INT_SCIF_TXIF(void);

// 232 SSU SSERI
#pragma interrupt INT_SSU_SSERI
extern void INT_SSU_SSERI(void);

// 233 SSU SSRXI
#pragma interrupt INT_SSU_SSRXI
extern void INT_SSU_SSRXI(void);

// 234 SSU SSTXI
#pragma interrupt INT_SSU_SSTXI
extern void INT_SSU_SSTXI(void);

// 235 Reserved

// 236 IIC2 IITEI
#pragma interrupt INT_IIC2_IITEI
extern void INT_IIC2_IITEI(void);

// 237 IIC2 IISTPI
#pragma interrupt INT_IIC2_IISTPI
extern void INT_IIC2_IISTPI(void);

// 238 IIC2 IITXI
#pragma interrupt INT_IIC2_IITXI
extern void INT_IIC2_IITXI(void);

// 239 IIC2 IIRXI
#pragma interrupt INT_IIC2_IIRXI
extern void INT_IIC2_IIRXI(void);

// 240 Reserved

// 241 Reserved

// 242 Reserved

// 243 Reserved

// 244 Reserved

// 245 Reserved

// 246 Reserved

// 247 Reserved

// 248 Reserved

// 249 Reserved

// 250 Reserved

// 251 Reserved

// 252 Reserved

// 253 Reserved

// 254 Reserved

// 255 Reserved

// Dummy
#pragma interrupt Dummy
extern void Dummy(void);
