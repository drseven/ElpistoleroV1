//#include
#include <wiringPiI2C.h>

    //Minimal constants carried over from Arduino library
#define	LSM303_ADDRESS_ACCEL	0x32 //0011001x
#define	LSM303_ADDRESS_MAG	0x3C //0011110x
   //Default Type
#define	LSM303_REGISTER_ACCEL_CTRL_REG1_A	0x20 //00000111 rw
#define	LSM303_REGISTER_ACCEL_CTRL_REG4_A	0x23 //00000000 rw
#define	LSM303_REGISTER_ACCEL_OUT_X_L_A		0x28
#define	LSM303_REGISTER_MAG_CRB_REG_M		0x01
#define	LSM303_REGISTER_MAG_MR_REG_M		0x02
#define	LSM303_REGISTER_MAG_OUT_X_H_M		0x03

    //Gain settings for setMagGain()
#define	LSM303_MAGGAIN_1_3 	0x20 // +/- 1.3
#define	LSM303_MAGGAIN_1_9 	0x40 // +/- 1.9
#define	LSM303_MAGGAIN_2_5 	0x60 // +/- 2.5
#define	LSM303_MAGGAIN_4_0 	0x80 // +/- 4.0
#define	LSM303_MAGGAIN_4_7 	0xA0 // +/- 4.7
#define	LSM303_MAGGAIN_5_6	0xC0 // +/- 5.6
#define	LSM303_MAGGAIN_8_1	0xE0 // +/- 8.1

int main()
{


return 0;
}
