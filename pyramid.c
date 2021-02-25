#include<stdio.h>

int main()
{
    int space,row,b=1;
    space = row +(4-1);

    printf("pls enter the value of row ");
    scanf("%d",&row);

    for( int i=1 ; i<=row ; i++ )
    {
        for( int k=space ; k>=1 ; k--)
        { printf(" "); }

        for( int j=1 ; j<=i ; j++)
        { printf(" %d",b++); }

        printf("\n");

        space--;
    }
}