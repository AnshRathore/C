#include <stdio.h>
#define MAX 50

void read_array(int a[], int )             ;
void print_unique(int a[], int )          ;
void find_unique (int a[], int b[], int N) ;
int srch (int  , int b[] , int *)         ;

int main()
{
    int a [ MAX ]  ;
    int b [ MAX ]  ;
    int N          ;
    
    printf("Number of Elements into Array ?\n");
    scanf("%d", &N);
    
    read_array (a, N)   ;
    find_unique (a, b, N ) ;
    
    return 0;
}

void read_array(int x[], int N)  // x = &a[ MAX ]
{
    printf("Enter %d Elements into the Array \n", N);
    for (int i = 0 ; i < N ; i++)
        scanf("%d", &x[i]);
}

// Main Function to find Unique Numbers
void find_unique (int  x[], int y [], int N)
{
    int ctr = 0 ;
    for ( int i = 0 ; i < N ; i++)
    {
        srch(x[i], y, &ctr) ;  // Search IF Number already existing
    }
    print_unique(y, ctr ) ;    // Print all the Unique Elements
}

// Insert into Array B if not existing
int srch (int num, int y[], int *ctr)
{
    
    for (int i = 0 ; i < *ctr ; i++)
       if ( num == y [  i  ])  // Do Not Insert AS Already in Array
            return -1 ;
            
    y [ *ctr ] = num    ;  // Insert if number does not exist
    *ctr = *ctr + 1     ;  // Increment to next Position to Insert Unique Number
    return 0            ;
}
    
// Print All the Unique Elements
void print_unique(int y[], int ctr )     
{
    printf("Unique elements of the array %d\n", ctr);
    for (int i = 0 ; i < ctr ; i++)
    {
        printf("%d ", y[i]) ;
    }
}
