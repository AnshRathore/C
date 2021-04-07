#include <stdio.h>

static int count_DigitOne(int n)
{
int m = 0, k = 0, x = 0, base = 1;
while (n > 0) 
{
k = n % 10;
n = n / 10;

if (k > 1) 
{ x += (n+1)*base; }

else if (k < 1) 
{ x += n*base; }

else { x += n*base+m+1; }

m += k*base;
base *= 10;
}
return x;
}

int main(void)
{
int n;
printf("pls enter the n ");
scanf("%d",&n);

printf("\nTotal number of digit 1 appearing in %d (less than or equal) is %d.", n, count_DigitOne(n));
}
