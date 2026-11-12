#include<stdio.h>

struct Data
{
    int roll_no;
    float marks;
    char grade;
};

union Data1
{
    int roll_no;
    float marks;
    char grade;
};

int main()
{
    struct Data s1;
    union Data1 u1;
    
    s1.roll_no = 101;
    s1.marks = 95.5;
    s1.grade = 'A';

    printf("%d\n", s1.roll_no);
    printf("%.2f\n", s1.marks);
    printf("%c\n", s1.grade);
    
    u1.roll_no = 101;
    printf("%d\n", u1.roll_no);
    
    u1.marks = 95.5;
    printf("%.2f\n", u1.marks);
    
    u1.grade = 'A';
    printf("%c\n", u1.grade);
    
    printf("Structure size: %zu\n", sizeof(s1));
    printf("Union size: %zu\n", sizeof(u1));
    
}