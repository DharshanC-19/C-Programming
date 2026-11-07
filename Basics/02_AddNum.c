#include<stdio.h>
int main()
{
    int num1,num2,sum;
    printf("enter first number: ", num1);
    scanf("%d",&num1);
    printf("enter second number:", num2);
    scanf("%d",&num2);

    sum = num1 + num2;
    printf("the sum of first and second number is %d",sum);
    
    return 0;
}