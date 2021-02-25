#include<stdio.h>

int main()
{
    int i ;
    printf("enter the value of i ="); scanf("%i",&i);

    int x;
    printf("enter the value of x ="); scanf("%i",&x);

    while(i<=x)

    {
        int j=1;
        while(j<=i) 

        {
            printf("%d  ",j);

            j++;

            /*int k=1;

            while(k<=j)

            {
                printf("%d",k);

                k++;
            }*/

        }
    
    printf("\n");
    i++;
    }
}