#include<stdio.h>

int main()
{
    int n,space;
    printf("pls enter the length of fig. ");
    scanf("%d",&n);

    for(int i=1;i<=n;i++)
    {
        for(int a=1 ; a<=i ; a++)
        {
            printf("* ");
        }
        for(int space=4*(n-i);space>=1;space--)
        {
            printf(" ");
        }
        for(int b=1; b<=i ;b++)
        {
            printf("* ");
        }
    space=space-2;
    printf("\n");
    }

    for(int j=n ; j>=1 ;j--)
    {
        for(int c=1;c<=j;c++)
        {
            printf("* ");
        }
        for(int space=0 ; space<4*(n-j) ; space++)
        {
            printf(" ");
        }
        for(int d=1;d<=j;d++)
        {
            printf("* ");
        }
    space=space+2;
    printf("\n");
    }

}