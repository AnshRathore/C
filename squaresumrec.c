#include<stdio.h>

int sqr_sum(int a)
{   
    int sum=0;
    for(int j=1;j<=a;j++)
    {
        sum=sum+j*j;
    }
    return sum ;
}

int main()
{
    int n;
    printf("pls enter value of nth term ");
    scanf("%d",&n);
    
    printf(" sum is %d",sqr_sum(n));
}