#ifndef SENSOR_H

#define SENSOR_H

void sensor_init(void);

int sensor_read(unsigned int value);

void sensor_display(int value);

#endif