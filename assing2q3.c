#include<stdio.h>

int main()
{
    int x,y,z;
    printf("pls enter the values ");
    scanf("%d%d%d",&x,&y,&z);

    if(x>=y && x>=z)
    {
        if(y>=z)        {printf("%d is second largest no. ",y);}

        else            {printf("%d is second largest no. ",z);}
    }

    if(y>=z && y>=x)
    {
        if(x>=z)        {printf("%d is second largest no. ",x);}

        else            {printf("%d is second largest no. ",z);}
    }

    else
    {
        if(x>=y)        {printf("%d is second largest no. ",x);}

        else            {printf("%d is second largest no. ",y);}
    }
}