#include<stdio.h>
#include<math.h>

long int fact(int n);
int main()
{
    int n,d=0;
    int b=1;
    printf("pls enter a no. ");
    scanf("%d",&n);

    b=fact(n);

    while ( b%10==0 )
    {
        b=b/10;
        d=d+1;
    }
    printf("trailing zero in %ld is %d ",fact(n),d);
}
long int fact(int n)
{
    if (n>=1)
        return n*fact(n-1);
    else
        return 1;
}