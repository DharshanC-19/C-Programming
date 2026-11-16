
#include <stdio.h>

extern int sensor_value;

void counter()
{
    static int count = 0;

    count++;
    printf("Counter: %d\n", count);
}

int main()
{
    printf("Static Variable Example:\n");

    counter();
    counter();
    counter();

    printf("\nExtern Variable Example:\n");

    printf("Sensor value: %d\n", sensor_value);

    return 0;
}


/*

in another file 

int sensor_value = 100;*/