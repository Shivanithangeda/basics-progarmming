/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

/*int main()
{
    int x=10;
    int *p;
    p=&x;
    printf("%d",*p);
}
*/
/*
int main()
{
    int x=256;
    float *p;
    p=&x;
    printf("%f",*p);
}*/

void f1(int a,int b)
{
    int c;
    c=a;a=b;b=c;
}
void f2(int *a,int *b){
    int c;
    c=*a;*a=*b;*b=c;
}
int main(){
    int a=4,b=5,c=6;
    f1(a,b);
    f2(&b,&c);
    printf("%d",c-a-b);
}