/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<stdio.h>
int sum(int,int);
int main()
{
    int a=6,b=5;
    sum(a,b);
    printf("\nTHE RESULT OF SUM:%d",a+b);
    
}
int sum(int a,int b)
{
    return a+b;
}