#include<stdio.h>

int main()
{
    int number,result;
    printf("Enter the number:");
    scanf("%d",&number);

    for(int i=0;i<=10;i++)
    {
        result= number * i;
        printf("%d x %d = %d \n",number,i,result);
    }
    return 0;
}