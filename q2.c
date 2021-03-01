#include <stdio.h>

int XOR(int x , int y) 
{
    return ( (x | y) & (~x | ~y) );
}

int main() 
{    
    int x , y ;
    
    printf("Enter first number: ");
    scanf("%d", &x);
    printf("Enter second number: ");
    scanf("%d", &y);
    
    printf("XOR is : %d", x , y, XOR(x,y));
}
