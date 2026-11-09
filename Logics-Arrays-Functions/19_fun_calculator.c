#include<stdio.h>

int add(int a,int b)
{
    return a+b;
}

int subtract(int a , int b)
{
    return a-b;
}
int multiply(int a,int b)
{
    return a*b;

}
float divide(int a,int b)
{
    return (float)a/b;
}

int main()
{
    int a,b,choice;
    printf("Enter a:");
    scanf("%d",&a);
    printf("Enter b:");
    scanf("%d",&b);

    printf("1.Addition\n");
    printf("2.Subtraction\n");
    printf("3.Multiplication\n");
    printf("4.Division\n");

    printf("enter choice:\n");
    scanf("%d",&choice);

    switch(choice)
    {
        case 1:
        printf("the addition of a and b is %d",add(a,b));
        break;

        case 2:
        printf("the subtraction of a and b is %d",subtract(a,b));
        break;

        case 3:
        printf("the multiplication of a and b is %d ",multiply(a,b));
        break;

        case 4:
        printf("the addition of a and b is %f",divide(a,b));
        break;

        default:
        printf("Enter valid choice!");
        break;

    }

    return 0;
}