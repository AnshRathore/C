#include<stdio.h>

int main ()
{
    int x,a,sum=0 ;

    printf("pls enter value of x "); scanf("%d",&x);
    int array[x];

    for(int i=0 ; i<x ; i++)
    {
        printf("pls enter value of a "); scanf("%d",&a);

        array[i]=a;
        sum=sum+a;
    }

    int small,large;

    large = small = array[0];
    
    for(int j=1 ; j<x ; j++)
    {    
        if(array[j]<small)  { small=array[j]; } 
        
        if(array[j]>large)  { large=array[j]; }
    }
    
    printf("smallest no. is %d\n",small);
    
    printf("largest no. is %d\n",large);

    printf("minimum sum is %d\n",sum-large);

    printf("maximum sum is %d\n",sum-small);
}