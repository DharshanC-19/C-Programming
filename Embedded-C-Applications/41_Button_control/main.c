#include<stdio.h>
#include<stdlib.h>

enum Button_State
{
    Released = 0,
    Pressed = 1
};

void led_on()
{
    printf("BUTTON is pressed and LED is On\n ");
}
void led_off()
{
    printf("BUTTON is  not pressed(REleased) and LED is OFF\n ");

}

enum Button_State button = Released;

int led_state = 0 ;
int main()

{
    int choice;

    while(1)
    {
        printf("1. Press Button\n");
        printf("2. Release Button\n");
        printf("3. Exit \n");

        printf("Enter choice:");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
            button = Pressed;
            led_state = 1; 
            led_on();
            break;
            case 2:
            button = Released;
            led_state = 0;
            led_off();
            break;

            case 3:
            printf("Exit Program\n");
            break;

            default:
            printf("INVALID CHOICE!!\n");
            
        }
    }

    return 0;
}