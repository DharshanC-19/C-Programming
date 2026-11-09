#include <stdio.h>
#include <string.h>

int main()
{
    char str[] = "HELLO I AM LEARNING C FOR EMBEDDED SYSTEMS";

    printf("The sizeof str is: %zu\n", sizeof(str));

    printf("The length of the string is: %zu\n", strlen(str));

    return 0;
}