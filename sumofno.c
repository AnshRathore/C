#include<stdio.h>

int digitsum(int a)
{
    int r=0;
    while(a!=0)
    {
    r = r + a%10;
    a=a/10;
    }
    return r;
}
int main()
{
    int n;
    printf("pls enter a no. ");
    scanf("%d",&n);

    printf("sum of digits of no. %d is %d ",n,digitsum(n));
}