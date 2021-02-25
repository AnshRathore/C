#include<stdio.h>

/*int main ()
    /*its not gonna print 
    i write it for fun

    puts("this is my c lang. day 1");//not this too

    printf("%s\n","its happening");// also not u

    printf("%c\n",'f');

    int height;

    height=182;

    printf("your height is %d cm",height);*/

int main() 
{
    char inputString[105]; // declare a variable to hold our input
    scanf("%[^\n]", inputString); // get a line of input from stdin and save it to our variable

    // Your first line of output goes here
    printf("Hello, World.\n");

    // Write the second line of output
    printf("%s", inputString);

    return 0;
}
