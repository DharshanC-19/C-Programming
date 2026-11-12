#include<stdio.h>

void new(int *num)
{
    *num = 2000;
}
int main()
{
    int num=13;
    printf("The current value is %d \n",num);

    new(&num);
    printf("the value after passing the function is %d\n",num);

    return 0;


}