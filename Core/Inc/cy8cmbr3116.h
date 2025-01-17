#ifndef CY8C_H
#define CY8C_H

#include "i2c.h"
#include "stdio.h"

extern uint8_t key_status[48];
extern uint8_t KEY_ADDR[16];
extern unsigned char CY8CMBR3116_configuration[128];
extern uint8_t key_sheet[48];
extern uint8_t key_threshold[35];

#define SENSOR_ADDR 0x6E
#define CONFIG_CRC 0X7E
#define CTRL_CMD 0x86
#define CTRL_CMD_STATUS 0x88
#define SYSTEM_STATUS 0x8A	//0: 非默认的出厂配置	1: 默认的出厂配置
#define CALC_CRC 0x94	//主机指令操作码 0x03 计算的配置数据 CRC
#define TOTAL_WORK_SNS 0x97
#define USER_DATA 0x7A //8BIT用户数据，可用来保持维护信息等。

void key_scan();
void Sensor_softRST(I2C_HandleTypeDef *hi2cx);
void Sensor_Cfg(I2C_HandleTypeDef *hi2cx);

#endif
