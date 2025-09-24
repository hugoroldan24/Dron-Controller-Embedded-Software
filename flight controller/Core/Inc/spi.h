/*
 * spi.h
 *
 *  Created on: Aug 14, 2025
 *      Author: 34684
 */

#ifndef SPI_H_
#define SPI_H_

void SPI_Init(void);
void SPI_Transmit(uint8_t *data, uint32_t size);
void SPI_Receive(uint8_t *data, uint32_t size);
void cs_enable(void);
void cs_disable(void);

#endif /* SPI_H_ */
