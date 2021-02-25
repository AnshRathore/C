#include <stdio.h>
#include<math.h>


int comb(int x , int y) /* i tried to make nCr function */ 
{
    int fact=1,e,f;
    e=(x-y);
    for( int b=1;b<=x;b++)       {       fact=fact*b;       x=fact;    }
    for( int c=1;c<=y;c++)       {       fact=fact*c;       y=fact;    }
    for( int d=1;d<=e;d++)       {       fact=fact*d;       e=fact;    }

    f = x/(y*e);
    return f;
}

int main ()
{
    int a;
    a = comb(1,1);
    printf("%d",a);
}