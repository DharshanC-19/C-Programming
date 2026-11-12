#include<stdio.h>

int main()
{
    int i,count=0;
    char str[20],*ptr;

    printf("enter the elements:");
    scanf("%19s",&str);

    ptr = str;

    while(*ptr != '\0')
    {
        count++;
        ptr++;
       
    }
    printf("the length of the character elemnts are %d:",count);

    return 0;

}