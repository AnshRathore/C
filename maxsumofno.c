#include<stdio.h>
#include<math.h>

int max(int n);
int main()
{
    int n;
    printf("pls enter a no. ");
    scanf("%d",&n);

    printf("max. product of the factors of no. %d is %d",n,max(n));
}
int max(int n)
{
    int q,r,c;

    q=n/3;
    r=n%3;

    if(r==0)    
    {        return pow(3,q);    }

    if(r==1)    
    {        return ( pow(3,q-1)*4);    }

    if(r==2)    
    {        return (pow(3,q)*r);    }

}