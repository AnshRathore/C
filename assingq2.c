#include<stdio.h>
int sum (int x, int y);
int main()
{
    int x,y,ans;

    do
    {
    printf("enter two no. \n");
    scanf("%d%d",&x,&y);
    printf("the sum of two no. that is %d and %d is %d\n",x,y,sum(x,y));

    printf("do u want to perform operation again 1 for yes 2 for no \n");
    scanf("%d",&ans);
    }while(ans!=2);
}

int sum (int x, int y)
{
    return (x+y);
}