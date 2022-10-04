#ifndef _CRC8_TABLE_H_
#define _CRC8_TABLE_H_

#include <stdint.h>

extern uint8_t CRC8_Tab[256];

uint8_t crc8_calc(uint8_t *data, uint16_t length);

#endif
