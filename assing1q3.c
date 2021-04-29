#include<stdio.h>

int main ()
{
    int x,num,small,large,ans;

    printf("enter the no. \n");
    scanf("%d",&x);

    small=x , large = x;
    do{
        printf("pls enter no. again\n ");
        scanf("%d",&num);

        if(small>num) {small=num;}
        if(large<num) {large=num;}

        printf("do u want to add more no. 1for yes 2 for no\n ");
        scanf("%d",&ans);
    }while(ans!=2);

    printf("smallest no. is %d and largest no. is %d\n",small,large);
}