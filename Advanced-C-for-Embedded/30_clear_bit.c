#include<stdio.h>

int main()
{
    unsigned int value = 10;
    unsigned int result;
    int position = 1;
    unsigned int mask = 1U << position ;


    printf("Original valure is %X \n",value);
    
    result = value & (~mask)  ;
    printf("Mask: %X\n", mask);
    printf("value after mask is %X \n",result);
    return 0;
}