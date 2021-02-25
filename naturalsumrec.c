#include<stdio.h>

int sum(int a)
{
    if(a==1) { return 1;}

    return a + sum(a-1);
}

int main()
{
    int n;
    printf("pls enter nth term ");
    scanf("%d",&n);

    printf("sum of n term is %d",sum(n));
}