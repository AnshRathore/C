#include <stdio.h>

int x;

int main()
{

    printf("pls enter value of array x=");
    scanf("%i", &x);

    int myarray[x];
    
    for (int i = 0; i < x; i++)
    {
        int k;
        printf("give value of k=");
        scanf("%i", &k);

        myarray[i] = k;
    }
    
    printf("\nyour array is { ");
    for( int i= 0; i<x;i++)
    {   
        if (i==x-1){
            printf("%d",myarray[i]);
        }

        else
            printf("%d, ",myarray[i]);
    }
    printf(" }\n"); 
    
}