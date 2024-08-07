/*
 * fnd_controller.h
 *
 *  Created on: Mar 2, 2022
 *      Author: JiWanOh
 */

#ifndef SRC_FND_CONTROLLER_H_
#define SRC_FND_CONTROLLER_H_

#include "main.h"

#define HIGH 1
#define LOW 0
#define true 1
#define false 0

void init_fnd(SPI_HandleTypeDef *hspi); // SPI_HandleTypeDef는 main.h에 정의되어있다. 더 정확히는 stm32f1xx_hal.h에 정의되어있음
void send(__uint8_t X);
void send_port(__uint8_t X,__uint8_t port);
void digit4_show(int n, int replay, __uint8_t showZero);
void digit4_replay(int n, int replay);
void digit4(int n);
void digit4showZero_replay(int n, int replay);
void digit4showZero(int n);
void digit2(int n, int port, int replay);
void digit2_port(int n, int port);

void digit4_temper(int n, int replay);


#endif /* SRC_FND_CONTROLLER_H_ */
