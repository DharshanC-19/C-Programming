#include<stdio.h>

int main()
{
    int N, arr[5],min,max;
    printf("Enter number:");
    scanf("%d",&N);

    printf("Enter the %d numbers:\n",N);

    for(int i=0;i<N;i++)
    {
        scanf("%d",&arr[i]);
    }

    min = max = arr[0];
    for(int i=1;i<N;i++)
    {
         if(arr[i]<min)
        {
            min = arr[i];
        }
        if(arr[i]>max)
        {
            max = arr[i];
        }
    }
   
    printf("the minimum of the numbers is %d\n",min);
    printf("the maximum of the numbers is %d\n",max);
    
    return 0;
}