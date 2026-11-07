#include<stdio.h>

int main()
{
    int N,sum;
    printf("Enter Number:");
    scanf("%d",&N);

    sum =0;
    if(N==0)
    {
        printf("please enter number greater than 1");
    }
    else
    {
        for(int i=0;i<=N;i++)
        {
            sum=sum + i;
            printf("%d\n",sum);
        }
    }
    
    return 0;
}