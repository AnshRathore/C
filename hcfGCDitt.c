#include <stdio.h>

int gcd_func(int n1 , int n2) 
{ 
    int gcd ;   
    for(int i = 1 ; i <= n1 && i <= n2 ; ++i)
    {
        if(n1 % i == 0 && n2 % i == 0)        
            gcd = i;
    }    
    return gcd ;   
}

int main()
{
    int a, b ;

    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);

    printf("GCD of %d and %d is: %d", a, b ,gcd_func(a,b));
}
