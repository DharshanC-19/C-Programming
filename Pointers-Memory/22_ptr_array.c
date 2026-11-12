#include<stdio.h>

int main()
{
    int i,arr[5],*ptr;

    printf("Enter the Elements:\n");

    for( i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
    }
    ptr = arr;

    for( i=0;i<5;i++)
    {
        printf("%d\n",*(ptr + i));
    } 
   
    for( i=0;i<5;i++)
    {
        printf("%d\n",arr[i]);
    }

    return 0;
}