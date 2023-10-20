/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<stdio.h>
long toBinary(int);
int main()
{
    long binarynum;
    int decimalnum;
    printf("enter any decimal num");
    scanf("%d",&decimalnum);
    binarynum=toBinary(decimalnum);
    printf("\n the binary value is:%ld \n\n",binarynum);
    
    return 0;
}


long toBinary(int decimalnum)
{
    long binarynum=0,remainder, digitplace=1;
    while(decimalnum!=0)
    {
        remainder=decimalnum % 2;
        binarynum=binarynum+remainder*digitplace;
        digitplace=digitplace*10;
        decimalnum=decimalnum/2;
    }
    return binarynum;
}