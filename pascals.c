#include<stdio.h>
#include<math.h>

int fact(int x ) 
{
    int a=1;
    if(x==0) { return(a);}
    else     
    {         
        for( int i=1 ; i<=x; i++)
        {
            a=a*i;
        }       
    return(a);
    }
}
int main()
{
    int rows,space;
    int alpha;

    printf("pls enter value of rows ");
    scanf("%d",&rows);

    for(int i=0;i<rows;i++)
    {
        for(int k=1 ; k<= rows-i ;k++)
        { printf(" "); }
        

        for(int j=0;j<=i;j++)
        {
            alpha = fact(i)/(float) (fact(j)*fact(i-j));
            printf("%d ",alpha);
        }
    printf("\n");
    }
}