/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<stdio.h>
int Primrornot(int);
int main()
{
    int x,primeornot;
    printf("ENETER THE NUMBER:");
    scanf("%d",&x);
     int prime=Primeornot(x);
    if(prime==1)
    printf("THE NUMBER %d is a prime number\n",x);
    else
    printf("the number %d is not a prime number\n",x);
    return 0;
}
int Primeornot(int x)
{
    int i=2;
    while(i<=x/2)
    {
        if(x%i==0)
        return 0;
        else
        i++;
    }
    return 1;
}
