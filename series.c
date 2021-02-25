#include<stdio.h>
#include<math.h>

void fact(int a)
{   
    for(int b=1;b<=a;b++)
    {
        int c = b;
    }
}

int main()
{
    int b,a,n,x,sum=0;

    printf("pls enter value of x and n resp ");
    scanf("%d%d",&x,&n);

    for(int i=0;i<=n;i=i+2)
    {
        b = i/fact(i);
        a = pow(x,b);
    }


}