/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<stdio.h>
int evenorodd(int n)
{
   
   
   if(n==0)
   return 0;
   if(n%2==0)
   {
       printf("the entered num is even");
   }
   else{
       printf("the entered num is odd");
   }
}
int main()
{
    int n;
    printf("ENTER THE NUMBER:");
    scanf("%d",&n);
    evenorodd(n);
    return 0;
}