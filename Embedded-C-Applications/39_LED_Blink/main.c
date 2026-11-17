#include<stdio.h>
#include<stdlib.h>

void LED_ON()
{
    printf("LED is ON\n");
}
void LED_OFF()
{
    printf("LED is OFF\n");
}

int led_state = 0;
int i;

int main()
{
    for(i=0;i<10;i++)
    {
        led_state = !led_state;

        if(led_state == 1 )
        {
            LED_ON();
        }
        else
        {
            LED_OFF();
        }
    }
    return 0;
}