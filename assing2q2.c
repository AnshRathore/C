#include<stdio.h>
#define ID 500
#define PASSWORD 777

int main ()
{
    int id,password;

    printf("pls enter your id ");
    scanf("%d",&id);

    if(id=ID)
    {
        printf("pls enter the password \n");
        scanf("%d",&password);

        if(password=PASSWORD)
        {
            printf("welcome dear coder\n");
        }
        else
        printf("incorrect password\n");
    }
    else
    printf("invalid id\n");
}