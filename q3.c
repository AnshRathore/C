#include<stdio.h>

int Add(int x, int y)
{
    while (y != 0)
    {
        int carry = x & y;  
        x = x ^ y; 
        y = carry << 1;
    }    
    return x;   
}

int main() 
{    
    int x , y ;
    
    printf("Enter first number:");
    scanf("%d", &x);
    
    printf("Enter second number:");
    scanf("%d", &y);
    
    printf("Addition of %d and %d is : %d", x, y, Add(x, y));
} 
