#include<stdio.h>
int main()
{
    int a,b,temp;
    a=10;
    b=20;
    printf("before swapping %d %d\n",a ,b);

    temp=a;
    a=b;
    b=temp;
    printf("after swapping %d %d ", a, b);
    
    return 0;
}