/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
/*void foo(int n, int sum) 
{ 
  int k = 0, j = 0; 
  if (n == 0) return; 
    k = n % 10;  
  j = n / 10; 
  sum = sum + k; 
  foo (j, sum); 
  printf ("%d,", k); 
} 
  
int main () 
{ 
  int a = 2048, sum = 0; 
  foo (a, sum); 
  printf ("%d\n", sum); 
}*/


/*#include "stdio.h"
int main()
{
 int a = 10;
 int b = 15;
 
 printf("=%d",(a+1),(b=a+2));
 printf(" %d=",b);
 
 return 0;
}*/

/*#include "stdio.h"
int main()
{
 int a = 10;
 
 printf("=%d %d=",(a+1));
 
 return 0;
}*/

/*#include<stdio.h>
int main()
{
  printf("'GeeksQuizn'");
  main();
  return 0;
} */


/*#include "stdio.h"
 
int foo(int a)
{
 printf("%d",a);
 return 0;
}
 
int main()
{
 foo;
 return 0;
} */

/*
#include <stdio.h>
int funcf (int x);
int funcg (int y);
 
main()
{
    int x = 5, y = 10, count;
    for (count = 1; count <= 2; ++count)
    {
        y += funcf(x) + funcg(x);
        printf ("%d ", y);
    }
}
 
funcf(int x)
{
    int y;
    y = funcg(x);
    return (y);
}
 
funcg(int x)
{
    static int y = 10;
    y += 1;
    return (y+x);
}
*/




