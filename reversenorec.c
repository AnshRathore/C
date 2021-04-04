#include<stdio.h>
#include<math.h>

int reverse(int a)
{   
    int digit = (int) log10(a);

    if(a == 0)
        return 0;
    
    return ((a%10 * pow(10, digit)) + reverse(a/10));
}
int main()
{
    int n;
    printf("pls enter a no. ");
    scanf("%d",&n);

    printf("reverse of no. %d is %d ",n,reverse(n));
}