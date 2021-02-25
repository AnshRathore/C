#include<stdio.h>

    int function(int a , int b)

    {
        return (a*b);
    }

int main()
{
    printf("enter two no.\n");

    int x;
    printf("1st no.="); scanf("%i",&x);

    int y;
    printf("2st no.="); scanf("%i",&y);

    int prod;

    prod = function(x,y);

    printf("the product is=%i",prod);

}