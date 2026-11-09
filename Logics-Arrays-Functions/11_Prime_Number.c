#include<stdio.h>

int main()
{
    int N,result;
    printf("Enter Number:");
    scanf("%d",&N);

    result=1;
    if(N<2)
    {
        printf("enter number other than 0 and 1\n");
    }
    
    for(int i=2;i<N;i++)
    {
       
        if(N % i ==0)
        {
            result = 0;
            break;
        }    
    } 
    if(result == 1)
    {
        printf("%d is a prime number",N);
    }
    else
    {
        printf("%d is  not a prime number",N);
    }
             
    return 0;

}