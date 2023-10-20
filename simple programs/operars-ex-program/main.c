/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
/*#include<stdio.h>
int main()
{
	int a;
	a = (1, 2, 3);
	printf("%d", a);
	return 0;
} */

/*
#include<stdio.h>
int main()
{
	unsigned int num = 54;
	printf("%d", ~num);
	return 0;
} */
#include<stdio.h>
int main()
{
	int x = 2;
	(x & 1) ? printf("true") : printf("false");
	return 0;
}

#include<stdio.h>
int main()
{
	int i = 10;
	i++;
	i * i;
	printf("%d\n",i);
	return 0;
}

#include<stdio.h>
int main()
{
	int a = 1, b = 3, c;
	c = b <<  a;
	b = c * (b * (++a)--);
	a = a >> b;
	printf("%d",b);
	return 0;
}

#include<stdio.h>
int main()
{
	printf("%d",3 * 2--);
}