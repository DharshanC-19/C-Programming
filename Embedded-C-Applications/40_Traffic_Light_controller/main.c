#include<stdio.h>
#include<stdlib.h>

enum TrafficLight
{
    RED = 0,
    YELLOW = 1,
    GREEN = 2 ,
};

enum TrafficLight current_state = RED ;

int main()
{
    for(int i=0;i<3;i++)
    {
        switch(current_state)
        {
            case RED :
            printf("RED light is active\n");
            current_state = GREEN;
            break;

            case YELLOW : 
            printf("YELLOW light is active\n");
            current_state = RED;
            break;

            case GREEN:
            printf("GREEN light is active\n");
            current_state = YELLOW;
            break;

            default : 
            printf("NO LIGHT IS ACTIVE\n");
            break;
        }
    }


    return 0;

}