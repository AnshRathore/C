#include<stdio.h>
int palindrome(int x);

int main ()
{
    int num;
    printf("pls enter a no. ");
    scanf("%d",&num);

    printf("%d",palindrome(num));
}
int palindrome(int x)
{
    int rev=0,temp;
    temp=x;
    while(x>0)
    {
        rev=rev*10+x%10;
        x=x/10;
    }
    return (rev==temp);
}