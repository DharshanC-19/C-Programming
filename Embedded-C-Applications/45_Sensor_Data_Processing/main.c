#include<stdio.h>
#include<stdlib.h>

enum Status
{
    NORMAL,
    ALERT
};

struct sensor
{
    unsigned int sensor_ID;
    float Reading;
    enum Status status;

};

float average(struct sensor s[],int size)
{
    float sum = 0;
    for(int i=0;i<size;i++)
    {
        sum += s[i].Reading;
    }
    return sum/size;
}

void display(struct sensor *ptr)
{
    printf("Sensor_ID: %u\n",ptr->sensor_ID);
    printf("Reading: %.2f\n",ptr->Reading);
    if(ptr->status == NORMAL)
    {
        printf("Status: NORMAL\n");
    }
    else
    {
        printf("Status: ALERT\n");
    }

}

void check_threshold(struct sensor s[], int size, float threshold)
{
    for(int i = 0; i < size; i++)
    {
        if(s[i].Reading > threshold)
        {
            s[i].status = ALERT;
        }
        else
        {
            s[i].status = NORMAL;
        }
    }
}

int main()
{
    struct sensor s[5];

    s[0].sensor_ID = 101;
    s[0].Reading = 13.596;
    s[0].status = NORMAL;

    s[1].sensor_ID = 102;
    s[1].Reading = 14.953;
    s[1].status = ALERT;

    s[2].sensor_ID = 103;
    s[2].Reading = 19.12;
    s[2].status = NORMAL;

    s[3].sensor_ID = 104;
    s[3].Reading = 12.596;
    s[3].status = ALERT;

    s[4].sensor_ID = 104;
    s[4].Reading = 14.596;
    s[4].status = NORMAL;

    float avg = average(s,5);
    
    printf("Average sensor reading: %.2f\n",avg);
    printf("\n");
    
    display(&s[0]);
    printf("\n");
    display(&s[3]);
    printf("\n");

    return 0;
}