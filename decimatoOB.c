
#include<stdio.h>
void convert_to_x_base(int num, int base)
{    
    int rem;
    if (num == 0)
    {
        return;
    }
    else
    {
        rem = num % base;       
        convert_to_x_base(num/base, base);         
        if(base == 16 && rem >= 10)
        {
            printf("%c", rem+55);
        }
        else
        {
            printf("%d", rem);
        }
    }
}
int main(void)
{
    int num, choice, base;

    while(1)
    {
        printf("Select conversion: \n\n");
        printf("1. Decimal to binary. \n");
        printf("2. Decimal to octal. \n");

        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                base = 2;
                break;
            case 2:
                base = 8;
                break;              
        }

        printf("Enter a number: ");
        scanf("%d", &num);

        printf("Result = ");

        convert_to_x_base(num, base);

        printf("\n\n");
    }        
}

