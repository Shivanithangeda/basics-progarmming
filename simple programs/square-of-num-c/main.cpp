/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/

#include<stdio.h>

double square(double a)
{
    return(a*a);
}
int main()
{
    
    double n;
    int a;
    printf("ENTER THE NUMBER\n:");
    scanf("%d",&a);
    n=square(a);
    printf("THE sqaure of %d is: %2f\n",n,a);
    return 0;
}