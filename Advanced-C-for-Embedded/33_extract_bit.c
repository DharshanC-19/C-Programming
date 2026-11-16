
#include <stdio.h>

int main()
{
    unsigned int value = 548;
    unsigned int mask;
    unsigned int result;

    int start_bit = 2;
    int width = 3;

    mask = (1U << width) - 1U;

    result = (value >> start_bit) & mask;

    printf("Original value: %u\n", value);
    printf("Extracted value: %u\n", result);

    return 0;
}
