#include <stdio.h>
#include <stdbool.h>

bool multiple9(int num) 
{   
    if(num == 0 || num == 9) 
        
        return true;

    if(num < 9) {
        
        return false ;       
    }   
        return multiple9((int) (num >> 3) - (int) (num & 7)) ;
}

int main() 
{    
    int num ;
    
    printf("enter number: ");
    scanf("%d", &num);
    
    if(multiple9(num))        
        printf("YES");
    
    else     
        printf("NO");
}
