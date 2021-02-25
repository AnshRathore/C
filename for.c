#include<stdio.h>

int main()
{
    int k,a;
    printf("pls give the value= "); scanf("%i",&k);

    for ( int i= 1; i<=k; i++)
    
    {
        for(int j=1;j<=i;j++)
        { 
            a=i;

            if(a<=k) 
            {   
                printf("%d ",a);               
            }
        }       
        printf("\n",i);
    }    
}