#include<stdio.h>

int main()
{
    int N,sum,arr[10];
    float average;

    printf("Enter Numbers:");
    scanf("%d",&N);

    sum = 0;
    
    printf("Enter the %d numbers\n",N);
    for(int i=0;i<N;i++)
    {
        
        scanf("%d",&arr[i]);

        sum = sum + arr[i];
    }
    printf("Sum = %d \n",sum);
    printf("Average = %.2f", (float)sum / N);

    return 0;
}