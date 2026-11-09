#include<stdio.h>

int main()
{
    int N,first,second,next;
    printf("Enter the number:");
    scanf("%d",&N);
    
    first = 0; 
    second = 1;

    for(int i=0;i<N;i++)
    {

        printf("%d",first);

        next = first + second;

        first = second;
        second = next;
    }
    return 0;
    
}