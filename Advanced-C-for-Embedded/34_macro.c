
#include <stdio.h>

#define SET_BIT(value, position)   ((value) |= (1U << (position)))
#define CLEAR_BIT(value, position) ((value) &= ~(1U << (position)))
#define TOGGLE_BIT(value, position) ((value) ^= (1U << (position)))

int main()
{
    unsigned int value = 10;

    printf("Original value: %u\n", value);

    SET_BIT(value, 2);
    printf("After setting bit 2: %u\n", value);

    CLEAR_BIT(value, 1);
    printf("After clearing bit 1: %u\n", value);

    TOGGLE_BIT(value, 0);
    printf("After toggling bit 0: %u\n", value);

    return 0;
}
