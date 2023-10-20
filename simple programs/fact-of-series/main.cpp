/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
/*fact 1= 1
  fact 2= 2*1  2*fact(1)
  fact 3=3*2*1 3*fact(2)
  fact n= n*fact(n-1)
*/
#include<stdio.h>
int fact(int n)
{
    int num=0,f=1;
    while(num<=n-1)
    {
        f=f+f*num;
        num++;
    }
    return f;
}
int main()
{
    int sum;
    sum=fact(1)/1+fact(2)/2+fact(3)/3+fact(4)/4+fact(5)/5;
    printf("the sum os the series: %d\n",sum);
}
