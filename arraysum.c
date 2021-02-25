#include<stdio.h>

int main ()
{
    int x;
    long a,b,sum=0;

    printf("pls enter value of x ");  scanf("%d",&x);
    
    int array[x];

    for(int j=0;j<x;j++)
    {
        printf("pls enter value of b ");  scanf("%d",&b);
        array[j]=b;
    }

    for(int i=0;i<x;i++)
    {
        a=array[i];

        sum =sum+a;
    }
    
    printf("%d",sum);
}