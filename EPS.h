/* 
 * File:   EPS.h
 * Author: ç≤ÅXñÿ„ƒ
 *
 * Created on 2021/06/30, 17:36
 */

#ifndef EPS_H
#define	EPS_H

/*---ADS CAN Message---*/
/* SIDH */
#define SIDH_READ   0b01100000
#define SIDH_MODE   0b01100001
#define SIDH_DATA1  0b01101100
#define SIDH_DATA2  0b01101101
#define SIDH_DATA3  0b01101110
#define SIDH_DATA4  0b01101111
#define SIDH_DATA5  0b01110000
#define SIDH_DATA6  0b01110001
#define SIDH_DATA7  0b01110010
#define SIDH_CMD    0b01111010

/* SIDL */
#define SIDL_W      0b00001001                                                  //WÇÃéûÇÃID
#define SIDL_R      0b00001000                                                  //RÇÃéûÇÃID

/* EID8 */
#define EID8_READ   0b00000000
#define EID8_MODE   0b00000000
#define EID8_DATA1  0b00000000
#define EID8_DATA2  0b00000000
#define EID8_DATA3  0b00000000
#define EID8_DATA4  0b00000000
#define EID8_DATA5  0b00000000
#define EID8_DATA6  0b00000000
#define EID8_DATA7  0b00000000
        
/* EID0 */
#define EID0_READ   0b00000000
#define EID0_MODE   0b00000101
#define EID0_DATA1  0b01000111
#define EID0_DATA2  0b01001111
#define EID0_DATA3  0b01010111
#define EID0_DATA4  0b01011111
#define EID0_DATA5  0b01100111
#define EID0_DATA6  0b01101111
#define EID0_DATA7  0b01110111

/* Filter */        
#define Sub_Filt    0b01100000



/*---Modebit---*/
#define _ChargeMode                          0b00000001
#define _COMMMode                            0b00000010
#define _StanbyMode                          0b00000011
#define _MissionMode                         0b00000100
#define _SafetyMode                          0b00000101

#endif


