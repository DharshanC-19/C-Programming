#include<stdio.h>

int main()
{
    unsigned int value = 10;
    unsigned int mask;
    unsigned int result;
    int position = 2;

    printf("Original valure is %x \n",value);
    mask = 1U << position ;
    
    result = value | mask ;
    printf("Mask: %X\n", mask);
    printf("value after mask is %x \n",result);
    return 0;
}