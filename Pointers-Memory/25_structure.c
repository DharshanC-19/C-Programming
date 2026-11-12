#include<stdio.h>

struct student
{
    int roll_no;
    char name[20];
    float marks;
};

int main()
{
    struct student s[3];
    
    printf("Enter the roll no:\n");
    scanf("%d",&s[0].roll_no);
    printf("Enter Name:\n");
    scanf("%19s",&s[1].name);
    printf("Enter Marks:\n");
    scanf("%f",&s[2].marks);

    printf("roll Number : %d\n",s[0].roll_no);
    printf("Name : %19s\n",s[1].name);
    printf("Marks : %.2f\n",s[2].marks);

    return 0;
}