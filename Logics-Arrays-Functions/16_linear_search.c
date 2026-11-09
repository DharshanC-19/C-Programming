#include<stdio.h>

int main()
{
    int N,target,arr[10],found;
    printf("Enter the number:");
    scanf("%d",&N);

     printf("enter the elements to store upto 10 numbers : ");

    for(int i=0;i<N;i++)
    {
       
        scanf("%d",&arr[i]);
    }

    printf("Enter the Number you want to find:");
    scanf("%d",&target);

    found = 0;
    for(int i=0;i<N;i++)
    {
        if(arr[i]==target)
        {
             found = 1;
             break;
        }
       
    }

    if(found == 1)
    {
        printf("Number was found");
    }
    if(found == 0)
    {
        printf(" Number not found");
    }

    return 0;

}