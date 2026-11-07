#include<stdio.h>

int main()
{
    float celcius, farenheit;

    printf(" Enter the temperature in Celcius:");
    scanf("%f",&celcius);

    farenheit = (celcius * 9.0/5.0) + 32;

    printf("temperature in farenheit: %.2f F",farenheit);

    return 0;
}