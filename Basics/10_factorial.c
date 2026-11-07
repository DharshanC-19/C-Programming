#include<stdio.h>

int main()
{
    int N,factorial;
    printf("Enter number:");
    scanf("%d",&N);

    factorial =1;
    if(N<0)
    {
        printf("ERROR\nenter number other than 0");
    }else
    {
        for(int i=1;i<=N;i++)
        {
            factorial= factorial * i;
            
        }
    }
    printf("Factorial of %d is %d\n",N,factorial);
    return 0;
}
