#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *ptr,N,i;
    printf("Enter Number:");
    scanf("%d",&N);
    
    if(N>0)
    {
        ptr = (int *)malloc(N * sizeof(int));
        if(ptr == 0)
        {
            printf("Memory Allocation Failed");
            return 1;
        }
    }
    printf("enter the numbers:\n");
    
    for(i=0;i<N;i++)
    {
        scanf("%d",&ptr[i]);   
    }
    
    for(i=0;i<N;i++)
    {
        printf("the numbers are : %d \n",ptr[i]);
    }
    
    free(ptr);
    ptr = NULL;
    
    return 0;
}
