#include<stdio.h>
#include<string.h>

struct sensor
{
    int sensor_ID;
    float reading;
    char unit[20];
}s1,s2;

void display(struct sensor *ptr)
{
    printf("Sensor ID : %d\n",ptr-> sensor_ID);
    printf("Reading : %.2f\n",ptr-> reading);
    printf("Unit : %s\n",ptr-> unit);
}

int main()
{
    s1.sensor_ID = 13;
    s1.reading = 96.69;
    strcpy(s1.unit,"volt");

    s2.sensor_ID = 108;
    s2.reading = 100.586;
    strcpy(s2.unit,"volt");

    display(&s1,&s2);
}