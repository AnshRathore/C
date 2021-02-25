#include<stdio.h>

int main ()
{
    int i,x,y,u=0,v=0;

    int a[i];
    int b[i];

    printf("pls enter value of i ");  scanf("%d",&i);

    for(int j=0; j<i; j++)
    {
        printf("pls enter value of x ");  scanf("%d",&x);
        a[i]=x;

        printf("pls enter value of y ");  scanf("%d",&y);
        b[i]=y;
    }

    for(int k=0;k<i;k++)
    {
        if(  a[k] > b[k]  ) { (u=u+1);}

        if(  a[k]== b[k]  ) { (u=u+0),(v=v+0);}

        if(  a[k] < b[k]  ) { (v=v+1);}
    }

    printf("score of Alice and Bob is %d and %d resp.",u,v);

}