#include<stdio.h>
#include<stdlib.h>

#define SIZE 5


int buffer[SIZE];

int write_index = 0;
int read_index = 0;
int count = 0;


void Insert_Data(int Data)
{
    if(count == SIZE)
    {
        printf("Buffer is FULL\n");
    }
    else
    {
        buffer[write_index] = Data;
        write_index ++;
        if(write_index == SIZE)
        {
            write_index = 0;
        }
        count ++;
        printf("Inserted Data: %d \n", Data);
    }
}

void Read_Data()
{
    if(count == 0)
    {
        printf("Buffer is EMPTY\n");
    }
    else
    {
        int Data = buffer[read_index];
        read_index ++;

        if(read_index == SIZE)
        {
            read_index = 0;
        }
        count--;
        printf("Received Data %d\n",Data);   
        
    }
}

void Read_All_Data(void)
{
    if(count == 0)
    {
        printf("Buffer is EMPTY\n");
    }
    else
    {
        while(count > 0)
        {
            Read_Data();
        }
    }
}


int main()
{
    int choice,value;
    while(1)
    {
        printf("1.Insert Data\n");
        printf("2.Read One Data\n");
        printf("3.Read All Data\n");
        printf("4.Exit\n");

        printf("Enter your choice:");
        scanf("%d",&choice);

        

        switch(choice)
        {
            case 1:
          
            printf("Enter value:");
            scanf("%d",&value);
            Insert_Data(value);
            printf("\n");
            break;

            case 2:
            Read_Data();
            printf("\n");
            break;

            case 3:
            Read_All_Data();
            printf("\n");
            break;

            case 4:
            printf("Exit choice\n");
            exit(0);
            

            default:
            printf("invalid choice\n");
            break;
        }
    }
    return 0;
}