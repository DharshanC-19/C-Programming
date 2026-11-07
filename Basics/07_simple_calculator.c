#include<stdio.h>

int main()
{
    int user_input1,user_input2,calculate;

    printf("enter first number:");
    scanf("%d",&user_input1);
    printf("enter second number:");
    scanf("%d",&user_input2);

    printf(" \tCALCULATIONS\n1.ADDITION\n2.SUBTRACTION\n3.MULTIPLICATION\n4.DIVISION\n");
    printf("enter your choice:");
    scanf("%d",&calculate);

    switch(calculate)
    {
        case 1:
        printf("Addition of two numbers is : %d",( user_input1 + user_input2));
        break;

        case 2:
        printf("Subtraction of two numbers is : %d",( user_input1 - user_input2));
        break;

        case 3:
        printf("Multiplication  of two numbers is : %d",( user_input1 * user_input2));
        break;

        case 4:
        if(user_input2 == 0){
            printf("Division by 0 is not possible");
        }else
        {
            printf("Division of two numbers is : %.2f",((float) user_input1 / user_input2));
        }
        
        break;

        default:
        printf("INVALID CHOICE!!");
        break;

    }

    return 0;
}