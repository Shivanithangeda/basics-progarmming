/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<stdio.h>
int swap(int *,int*);
int main()
{
    int n1,n2,temp;
    printf("enter the value of n1:");
    scanf("%d",&n1);
    printf("enter the value of n2:");
    scanf("%d",&n2);
    printf("before swaping of:n1= %d,n2= %d\n",n1,n2);
    swap(&n1,&n2);
    
    printf("after swaping n1=%d,n2= %d",n1,n2);
    return 0;
    
}
int swap(int *p,int *q)
{
    int temp=*p;
    *p=*q;
    *q=temp;
}