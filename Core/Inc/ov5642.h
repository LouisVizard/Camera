/*
 * ov5642.h
 *
 *  Created on: Jun 29, 2025
 *      Author: lumar
 */

#ifndef INC_OV5642_H_
#define INC_OV5642_H_

#include "main.h"
#include "ov5642_settings.h"

#define OV5642_I2C_ADDR 0x78
#define OV5642_XDIM 320
#define OV5642_YDIM 240
#define OV5642_BUFF OV5642_XDIM*OV5642_YDIM


// Private functions
static void writeRegister(sensor_reg reg);
static uint8_t readReister(uint16_t addr);

// Public functions
void initCamera(void);
void setBrightness(uint8_t blevel);


#endif /* INC_OV5642_H_ */
