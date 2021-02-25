#include<stdio.h>

int main()
{
    
    int a[3];
    int b[3];
    int c[3];

    for( int i=0; i<3 ; i++)
    {
        int x,y,z;

        printf("pls enter value of x , y , z ");  scanf("%d%d%d",&x,&y,&z);

        a[i]=x;

        b[i]=y;

        c[i]=z;
    }
    
    int u = (a[0])*( b[1]*c[2] - b[2]*c[1] ) - (a[1])*( b[0]*c[2] - b[2]*c[0] ) + (a[2])*( b[0]*c[1] - b[1]*c[0] ) ;

    printf(" value of determinant is %d",u);
}