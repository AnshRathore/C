#include<stdio.h>

void product(int a , int b)
{
    int product=a*b;

    printf("product is =%i",product);
}


int main()
{
printf("enter two no.\n");

int x;
printf("1st no is="); scanf("%i",&x);

int y;
printf("2nd no is="); scanf("%i",&y);

product(x,y);
}