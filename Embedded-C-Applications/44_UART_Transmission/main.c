#include<stdio.h>
#include<stdlib.h>
#include<string.h>




void UART_transmit(char Data)
{
    printf("Transmitted Data: %c\n",Data);
}

void UART_Transmit_string(char *message)
{
    int i = 0;
    while(message[i] != '\0')
    {
        UART_transmit(message[i]);
        i++;
    }
}

char UART_Receive()
{
    char Data;

    printf("Enter a character: ");
    scanf(" %c", &Data);

    return Data;
}

void UART_Receive_String(char *message, int size)
{
    printf("Enter a message: ");

    fgets(message, size, stdin);

    message[strcspn(message, "\n")] = '\0';
}

int main()
{
    char received_message[50];

    UART_Receive_String(received_message, sizeof(received_message));

    printf("Received Message: %s\n", received_message);

    UART_transmit('D');
    UART_Transmit_string("HELLLO");

    

    return 0;
}
