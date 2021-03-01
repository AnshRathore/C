#include<stdio.h>

int digitsum(int a)
{
    if (a == 0) 
    return 0; 
    return (a % 10 + digitsum(a / 10)); 
}
int main()
{
    int n;
    printf("pls enter a no. ");
    scanf("%d",&n);

    printf("sum of digits of no. %d is %d ",n,digitsum(n));
}