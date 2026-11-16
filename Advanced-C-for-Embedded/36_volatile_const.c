// Code using Const 

#include <stdio.h>

int main()
{
    const int number = 50;

    printf("Number: %d\n", number);

    number = 100;  // Try modifying it

    return 0;
}


// code using Volatile

#include <stdio.h>

int main()
{
    volatile int count = 0;

    for (int i = 0; i < 5; i++)
    {
        count++;
    }

    printf("Count: %d\n", count);

    return 0;
}