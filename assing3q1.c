#include<stdio.h>
void prime(int num);

int main()
{
    int num;
    printf("pls enter a no. ");
    scanf("%d",&num);
    prime(num);    
}
void prime(int num)
{
    int r=0;
    for(int i=2;i<=num/2;i++)
    {
        if(num%i==0)
            r=1;
    }
    if(r==1)
        printf("%d",num*num*num);

    else
        printf("%d",num*num);
}