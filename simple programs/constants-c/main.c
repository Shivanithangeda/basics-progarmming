/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/

/*#include<stdio.h>
 #include<stdio.h>
 #define PI 3.14159
 int main() {
printf("%.5f",  PI);
	return 0;
}*/

//macros as functions
/*
#include<stdio.h>
#define add(x,y) x+y
int main()
{
    printf("addition of two numbers:%d",add(4,5));
    return 0;
}*/

// CAN USE MULTIPE LINES USING \x,y
/*
#include<stdio.h>
#define greater(x,y)  if(x>y)\
printf("%d is greater than %d",x,y); \
else \
printf("%d is lesser than %d",x,y);
int  main()
{
    greater(5,6);
    return 0;
}*/

//some predefined amcros like __DATA__,__TIME__ can print date __TIME__
/*#include<stdio.h>
int DATA;
int TIME;
int main()
{
    printf("Date: %s\n", __DATA__);
    printf("time: %s\n",__TIME___);
    return 0;

}*/
