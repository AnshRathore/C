#include<stdio.h>
#include<math.h>

int main ()
{
    int a,b,k=1;

    printf("pls enter the value for series "); scanf("%d",&a);

    for(int i=1;i<=a;i++)
    {
        for(int j=1;j<=i;j++)
        {
            printf("%d",k++);
        }
        printf("\n");
    }

}