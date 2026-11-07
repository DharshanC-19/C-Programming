#include<stdio.h>

int main()
{
    int user_number;

    printf(" enter the number:");
    scanf("%d",&user_number);

    if((user_number % 2) ==0)
    {
        printf("the entered number is even number");
    }
    else{
        printf("the entered number is odd number");
    }

    return 0;
}