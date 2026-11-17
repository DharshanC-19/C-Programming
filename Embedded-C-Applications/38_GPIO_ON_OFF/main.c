#include<stdio.h>
#include<stdlib.h>


int gpio_state = 0;

void gpio_on()
 {                
    gpio_state = 1;
    printf("GPIO is ON\n");
}

void gpio_off()
{
    gpio_state = 0;
    printf("GPIO is OFF\n");
}


int main(void)
{
    
    int choice;

   

    printf("\t GPTO STATE LEVELS \n 1.GPIO_ON\n 2.GPIO_OFF\n 3. Exited form choice\n");
    while(1)
    {
        printf("Enter your Choice:");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1: 
            gpio_on();
            break;

            case 2:
            gpio_off();
            break;

            case 3:
            printf("choice exited \n");
            break;

            default :
            printf("INVALID CHOICES!\n");
            break;
        }


    }
    
    return 0;
    
}