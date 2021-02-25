#include<stdio.h>

int reverse(int a)
{
    int r;
    while(a!=0)
    {
    r = r*10 + a%10;
    a=a/10;
    }
    return r;
}
int main()
{
    int n;
    printf("pls enter a no. ");
    scanf("%d",&n);

    printf("reverse of no. %d is %d ",n,reverse(n));
}