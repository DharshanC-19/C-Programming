#include<stdio.h>

int main()
{
    int N,digit,reverse;
    printf("Enter Number:");
    scanf("%d",&N);

    reverse = 0;

    while(N>0)
    {
        digit = N % 10;
        reverse =reverse * 10 + digit;
        N=N/10;

    }
    printf("%d",reverse);
    return 0;
}