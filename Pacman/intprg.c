/***********************************************************************/
/*                                                                     */
/*  FILE        :intprg.c                                              */
/*  DATE        :Fri, Jan 13, 2017                                     */
/*  DESCRIPTION :Interrupt Program                                     */
/*  CPU TYPE    :SH7085                                                */
/*                                                                     */
/*  This file is generated by Renesas Project Generator (Ver.4.19).    */
/*  NOTE:THIS IS A TYPICAL EXAMPLE.                                    */
/***********************************************************************/



#include <machine.h>
#include "vect.h"
#pragma section IntPRG
// 4 Illegal code
void INT_Illegal_code(void){/* sleep(); */}
// 5 Reserved

// 6 Illegal slot
void INT_Illegal_slot(void){/* sleep(); */}
// 7 Reserved

// 8 Reserved

// 9 CPU Address error
void INT_CPU_Address(void){/* sleep(); */}
// 10 DTC Address error
void INT_DTC_Address(void){/* sleep(); */}
// 11 NMI
void INT_NMI(void){/* sleep(); */}
// 12 User breakpoint trap
void INT_User_Break(void){/* sleep(); */}
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
void INT_TRAPA32(void){/* sleep(); */}
// 33 TRAPA (User Vecter)
void INT_TRAPA33(void){/* sleep(); */}
// 34 TRAPA (User Vecter)
void INT_TRAPA34(void){/* sleep(); */}
// 35 TRAPA (User Vecter)
void INT_TRAPA35(void){/* sleep(); */}
// 36 TRAPA (User Vecter)
void INT_TRAPA36(void){/* sleep(); */}
// 37 TRAPA (User Vecter)
void INT_TRAPA37(void){/* sleep(); */}
// 38 TRAPA (User Vecter)
void INT_TRAPA38(void){/* sleep(); */}
// 39 TRAPA (User Vecter)
void INT_TRAPA39(void){/* sleep(); */}
// 40 TRAPA (User Vecter)
void INT_TRAPA40(void){/* sleep(); */}
// 41 TRAPA (User Vecter)
void INT_TRAPA41(void){/* sleep(); */}
// 42 TRAPA (User Vecter)
void INT_TRAPA42(void){/* sleep(); */}
// 43 TRAPA (User Vecter)
void INT_TRAPA43(void){/* sleep(); */}
// 44 TRAPA (User Vecter)
void INT_TRAPA44(void){/* sleep(); */}
// 45 TRAPA (User Vecter)
void INT_TRAPA45(void){/* sleep(); */}
// 46 TRAPA (User Vecter)
void INT_TRAPA46(void){/* sleep(); */}
// 47 TRAPA (User Vecter)
void INT_TRAPA47(void){/* sleep(); */}
// 48 TRAPA (User Vecter)
void INT_TRAPA48(void){/* sleep(); */}
// 49 TRAPA (User Vecter)
void INT_TRAPA49(void){/* sleep(); */}
// 50 TRAPA (User Vecter)
void INT_TRAPA50(void){/* sleep(); */}
// 51 TRAPA (User Vecter)
void INT_TRAPA51(void){/* sleep(); */}
// 52 TRAPA (User Vecter)
void INT_TRAPA52(void){/* sleep(); */}
// 53 TRAPA (User Vecter)
void INT_TRAPA53(void){/* sleep(); */}
// 54 TRAPA (User Vecter)
void INT_TRAPA54(void){/* sleep(); */}
// 55 TRAPA (User Vecter)
void INT_TRAPA55(void){/* sleep(); */}
// 56 TRAPA (User Vecter)
void INT_TRAPA56(void){/* sleep(); */}
// 57 TRAPA (User Vecter)
void INT_TRAPA57(void){/* sleep(); */}
// 58 TRAPA (User Vecter)
void INT_TRAPA58(void){/* sleep(); */}
// 59 TRAPA (User Vecter)
void INT_TRAPA59(void){/* sleep(); */}
// 60 TRAPA (User Vecter)
void INT_TRAPA60(void){/* sleep(); */}
// 61 TRAPA (User Vecter)
void INT_TRAPA61(void){/* sleep(); */}
// 62 TRAPA (User Vecter)
void INT_TRAPA62(void){/* sleep(); */}
// 63 TRAPA (User Vecter)
void INT_TRAPA63(void){/* sleep(); */}
// 64 Interrupt IRQ0
void INT_IRQ0(void){/* sleep(); */}
// 65 Interrupt IRQ1
void INT_IRQ1(void){/* sleep(); */}
// 66 Interrupt IRQ2
void INT_IRQ2(void){/* sleep(); */}
// 67 Interrupt IRQ3
void INT_IRQ3(void){/* sleep(); */}
// 68 Interrupt IRQ4
void INT_IRQ4(void){/* sleep(); */}
// 69 Interrupt IRQ5
void INT_IRQ5(void){/* sleep(); */}
// 70 Interrupt IRQ6
void INT_IRQ6(void){/* sleep(); */}
// 71 Interrupt IRQ7
void INT_IRQ7(void){/* sleep(); */}
// 72 DMAC0 DEI0
void INT_DMAC0_DEI0(void){/* sleep(); */}
// 73 Reserved

// 74 Reserved

// 75 Reserved

// 76 DMAC1 DEI1
void INT_DMAC1_DEI1(void){/* sleep(); */}
// 77 Reserved

// 78 Reserved

// 79 Reserved

// 80 DMAC2 DEI2
void INT_DMAC2_DEI2(void){/* sleep(); */}
// 81 Reserved

// 82 Reserved

// 83 Reserved

// 84 DMAC3 DEI3
void INT_DMAC3_DEI3(void){/* sleep(); */}
// 85 Reserved

// 86 Reserved

// 87 Reserved

// 88 MTU0 TGIA0
void INT_MTU0_TGIA0(void){/* sleep(); */}
// 89 MTU0 TGIB0
void INT_MTU0_TGIB0(void){/* sleep(); */}
// 90 MTU0 TGIC0
void INT_MTU0_TGIC0(void){/* sleep(); */}
// 91 MTU0 TGID0
void INT_MTU0_TGID0(void){/* sleep(); */}
// 92 MTU0 TCIV0
void INT_MTU0_TCIV0(void){/* sleep(); */}
// 93 MTU0 TGIE0
void INT_MTU0_TGIE0(void){/* sleep(); */}
// 94 MTU0 TGIF0
void INT_MTU0_TGIF0(void){/* sleep(); */}
// 95 Reserved

// 96 MTU1 TGIA1
void INT_MTU1_TGIA1(void){/* sleep(); */}
// 97 MTU1 TGIB1
void INT_MTU1_TGIB1(void){/* sleep(); */}
// 98 Reserved

// 99 Reserved

// 100 MTU1 TCIV1
void INT_MTU1_TCIV1(void){/* sleep(); */}
// 101 MTU1 TCIU1
void INT_MTU1_TCIU1(void){/* sleep(); */}
// 102 Reserved

// 103 Reserved

// 104 MTU2 TGIA2
void INT_MTU2_TGIA2(void){/* sleep(); */}
// 105 MTU2 TGIB2
void INT_MTU2_TGIB2(void){/* sleep(); */}
// 106 Reserved

// 107 Reserved

// 108 MTU2 TCIV2
void INT_MTU2_TCIV2(void){/* sleep(); */}
// 109 MTU2 TCIU2
void INT_MTU2_TCIU2(void){/* sleep(); */}
// 110 Reserved

// 111 Reserved

// 112 MTU3 TGIA3
void INT_MTU3_TGIA3(void){/* sleep(); */}
// 113 MTU3 TGIB3
void INT_MTU3_TGIB3(void){/* sleep(); */}
// 114 MTU3 TGIC3
void INT_MTU3_TGIC3(void){/* sleep(); */}
// 115 MTU3 TGID3
void INT_MTU3_TGID3(void){/* sleep(); */}
// 116 MTU3 TCIV3
void INT_MTU3_TCIV3(void){/* sleep(); */}
// 117 Reserved

// 118 Reserved

// 119 Reserved

// 120 MTU4 TGIA4
void INT_MTU4_TGIA4(void){/* sleep(); */}
// 121 MTU4 TGIB4
void INT_MTU4_TGIB4(void){/* sleep(); */}
// 122 MTU4 TGIC4
void INT_MTU4_TGIC4(void){/* sleep(); */}
// 123 MTU4 TGID4
void INT_MTU4_TGID4(void){/* sleep(); */}
// 124 MTU4 TCIV4
void INT_MTU4_TCIV4(void){/* sleep(); */}
// 125 Reserved

// 126 Reserved

// 127 Reserved

// 128 MTU5 TGIU5
void INT_MTU5_TGIU5(void){/* sleep(); */}
// 129 MTU5 TGIV5
void INT_MTU5_TGIV5(void){/* sleep(); */}
// 130 MTU5 TGIW5
void INT_MTU5_TGIW5(void){/* sleep(); */}
// 131 Reserved

// 132 POE OEI1
void INT_POE_OEI1(void){/* sleep(); */}
// 133 POE OEI3
void INT_POE_OEI3(void){/* sleep(); */}
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
void INT_IIC2_IINAKI(void){/* sleep(); */}
// 157 Reserved

// 158 Reserved

// 159 Reserved

// 160 MTU2S_3 TGIA_3S
void INT_MTU2S_3_TGIA_3S(void){/* sleep(); */}
// 161 MTU2S_3 TGIB_3S
void INT_MTU2S_3_TGIB_3S(void){/* sleep(); */}
// 162 MTU2S_3 TGIC_3S
void INT_MTU2S_3_TGIC_3S(void){/* sleep(); */}
// 163 MTU2S_3 TGID_3S
void INT_MTU2S_3_TGID_3S(void){/* sleep(); */}
// 164 MTU2S_3 TCIV_3S
void INT_MTU2S_3_TCIV_3S(void){/* sleep(); */}
// 165 Reserved

// 166 Reserved

// 167 Reserved

// 168 MTU2S_4 TGIA_4S
void INT_MTU2S_4_TGIA_4S(void){/* sleep(); */}
// 169 MTU2S_4 TGIB_4S
void INT_MTU2S_4_TGIB_4S(void){/* sleep(); */}
// 170 MTU2S_4 TGIC_4S
void INT_MTU2S_4_TGIC_4S(void){/* sleep(); */}
// 171 MTU2S_4 TGID_4S
void INT_MTU2S_4_TGID_4S(void){/* sleep(); */}
// 172 MTU2S_4 TCIV_4S
void INT_MTU2S_4_TCIV_4S(void){/* sleep(); */}
// 173 Reserved

// 174 Reserved

// 175 Reserved

// 176 MTU2S_5 TGIU_5S
void INT_MTU2S_5_TGIU_5S(void){/* sleep(); */}
// 177 MTU2S_5 TGIV_5S
void INT_MTU2S_5_TGIV_5S(void){/* sleep(); */}
// 178 MTU2S_5 TGIW_5S
void INT_MTU2S_5_TGIW_5S(void){/* sleep(); */}
// 179 Reserved

// 180 POE OEI2
void INT_POE_OEI2(void){/* sleep(); */}
// 181 Reserved

// 182 Reserved

// 183 Reserved

// 184 CMT0 CMI0
void INT_CMT0_CMI0(void){/* sleep(); */}
// 185 Reserved

// 186 Reserved

// 187 Reserved

// 188 CMT1 CMI1
void INT_CMT1_CMI1(void){/* sleep(); */}
// 189 Reserved

// 190 Reserved

// 191 Reserved

// 192 BSC CMI
void INT_BSC_CMI(void){/* sleep(); */}
// 193 Reserved

// 194 Reserved

// 195 Reserved

// 196 WDT ITI
void INT_WDT_ITI(void){/* sleep(); */}
// 197 Reserved

// 198 Reserved

// 199 Reserved

// 200 AD0 ADI0
void INT_AD0_ADI0(void){/* sleep(); */}
// 201 AD1 ADI1
void INT_AD1_ADI1(void){/* sleep(); */}
// 202 Reserved

// 203 Reserved

// 204 AD2 ADI2
void INT_AD2_ADI2(void){/* sleep(); */}
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
void INT_SCI0_ERI0(void){/* sleep(); */}
// 217 SCI0 RXI0
void INT_SCI0_RXI0(void){/* sleep(); */}
// 218 SCI0 TXI0
void INT_SCI0_TXI0(void){/* sleep(); */}
// 219 SCI0 TEI0
void INT_SCI0_TEI0(void){/* sleep(); */}
// 220 SCI1 ERI1
void INT_SCI1_ERI1(void){/* sleep(); */}
// 221 SCI1 RXI1
void INT_SCI1_RXI1(void){/* sleep(); */}
// 222 SCI1 TXI1
void INT_SCI1_TXI1(void){/* sleep(); */}
// 223 SCI1 TEI1
void INT_SCI1_TEI1(void){/* sleep(); */}
// 224 SCI2 ERI2
void INT_SCI2_ERI2(void){/* sleep(); */}
// 225 SCI2 RXI2
void INT_SCI2_RXI2(void){/* sleep(); */}
// 226 SCI2 TXI2
void INT_SCI2_TXI2(void){/* sleep(); */}
// 227 SCI2 TEI2
void INT_SCI2_TEI2(void){/* sleep(); */}
// 228 SCIF ERIF
void INT_SCIF_ERIF(void){/* sleep(); */}
// 229 SCIF RXIF
void INT_SCIF_RXIF(void){/* sleep(); */}
// 230 SCIF BRIF
void INT_SCIF_BRIF(void){/* sleep(); */}
// 231 SCIF TXIF
void INT_SCIF_TXIF(void){/* sleep(); */}
// 232 SSU SSERI
void INT_SSU_SSERI(void){/* sleep(); */}
// 233 SSU SSRXI
void INT_SSU_SSRXI(void){/* sleep(); */}
// 234 SSU SSTXI
void INT_SSU_SSTXI(void){/* sleep(); */}
// 235 Reserved

// 236 IIC2 IITEI
void INT_IIC2_IITEI(void){/* sleep(); */}
// 237 IIC2 IISTPI
void INT_IIC2_IISTPI(void){/* sleep(); */}
// 238 IIC2 IITXI
void INT_IIC2_IITXI(void){/* sleep(); */}
// 239 IIC2 IIRXI
void INT_IIC2_IIRXI(void){/* sleep(); */}
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
void Dummy(void){/* sleep(); */}
