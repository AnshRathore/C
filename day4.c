#include<stdio.h>

int main()
{

    int a , b;

    printf("pls enter value of a "); scanf("%i",&a);

    printf("pls enter value of b "); scanf("%i",&b);

    int c ;

    c = (a>b) ? b:a;

    printf("the ans. of greater equality is=%d",c );

}