#ifndef MPU6050_H_
#define MPU6050_H_

void init_mpu6050(void);
void mpu_read (uint8_t reg_addr,uint8_t* reg);
void mpu_write (uint8_t reg_addr, uint8_t* value);
int mpu_read_acc_gyr (float buf[6]);


#endif /* MPU6050_H_ */

