#include <stdio.h>

int hcf(int n1, int n2)
{  
    if (n2 != 0)
        return hcf(n2, n1 % n2);       
    else
        return n1;
}

int main() 
{   
    int a, b;
    
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);
    
    printf("GCD of %d and %d is : %d", a, b, hcf(a, b));
}


