#include<stdio.h>
#include "sensor.h"


void sensor_init(void)
{
    printf("Sensor Initialized successfully\n");
}

int sensor_read(unsigned int value)
{
    return value;
}

void sensor_display(int value)
{
    printf("sensor value : %d\n",value);
}