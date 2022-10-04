#include <stdio.h>
#include <stdlib.h>
#include "CRC8_Table.h"

int main()
{
    uint8_t test_array[] = {0xf1, 0xe8, 0x32, 0x67, 0x94};
	uint8_t cnt = sizeof(test_array);
	uint8_t crc_result = 0;
	
	crc_result = crc8_calc(test_array, cnt);
    printf("crc_result = 0x%x.", crc_result);
    
    return 0;
}
