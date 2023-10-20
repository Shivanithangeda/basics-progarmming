/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
/*#include<iostream>
using namespace std;
int calcSum(int a, int b, int c)    
{
   
    return a+b+c;
}
int main()
{
    int a,b,c;
    
    calcSum(a,b,c);
    int n;
    cout<<"enter the values of elements:";
    cin>>n;
    cout<<"Sum of the given a,b and c:"<<a+b+c;
} */
#include<iostream>
using namespace std;
int calcSum(int,int,int);
int main()
{
    int x,y,z;
    cout<<"enter the frst number:";
    cin>>x;
    cout<<"enter the second number:";
    cin>>y;
    cout<<"enter the third number:";
    cin>>z;
    calcSum(x,y,z);
    
}
int calcSum(int a,int b,int c )
{
    int s;
    s=a+b+c;
    cout<<"Sum of the given a,b and c is"<<s;
    return 0;
}