#include<stdio.h>

int fib(int num)
{
    if(num==0) {return 0;}

    if(num==1) {return 1;}

    return fib(num-1) + fib(num-2);
}
int main()
{
    int n;
    printf("pls enter the value of n ");
    scanf("%d",&n);

    for(int i=0;i<n;i++)
    {
        printf(" %d , ",fib(i));
    }
}