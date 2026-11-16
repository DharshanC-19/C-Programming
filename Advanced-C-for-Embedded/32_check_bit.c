#include<stdio.h>

int main()
{
    unsigned int value = 10;
    int position = 1;
    unsigned int mask = 1U << position ;

    unsigned int result = value & mask;

    if(result != 0 )
    {
        printf("Bit is set\n");
    }
    else
    {
        printf("Bit is not yet set \n");
    }

    return 0;


    
}