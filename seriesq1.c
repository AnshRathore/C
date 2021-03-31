#include<stdio.h>

int main ()
{
    int rows,a=1,space;

    printf("pls enter values of rows ");
    scanf("%d",&rows);

    for(int i=1 ; i<=rows ; i++)
    {
        for(int space=rows-i ; space>=1 ; space--)
        {
            printf(" ");
        }

        for(int k=1 ; k<=i ; k++)
        {
            printf("%d ",a++);
        }
        printf("\n");
    }
}