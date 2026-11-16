#include<stdio.h>
#include "sensor.h"

int main()
{
    unsigned int value = 13;

    sensor_init();

    value = sensor_read(value);

    sensor_display(value);

}
