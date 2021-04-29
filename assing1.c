#include<stdio.h>
#define NUM 1000

int main ()
{
    int guess_num;
    printf("guess the number\n ");
    scanf("%d",&guess_num);

    while(guess_num!=NUM)
    {
        if(guess_num>NUM)
        {
            printf("too high try again\n ");
        }
        if(guess_num<NUM)
        {
            printf("too low try again \n");
        }
        printf("guess the no,. again\n ");  
        scanf("%d",&guess_num);
    }
    printf("guessed no. is correct ");
}