#include<stdio.h>
#include<stdlib.h>

int main()
{
    int counter,target,event;

    counter = 0;
    target = 13;
    event = 0;

    for(int i=0;i<30;i++)
    {
        counter++;
        printf("timer count: %d\n",counter);

        if(counter >= target)
        {
            event = 1;
            printf("Event Occured\n");
            counter = 0;
            event = 0;
        }
    }
    return 0;
}
