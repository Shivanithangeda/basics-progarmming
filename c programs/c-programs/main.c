/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
// #include <stdio.h>

// int main()
// {
//     int a,b;
//   printf("enter two numbers:");
//   scanf("%d %d",&a,&b);
//   int c=a+b;
//   printf("addition of a and b is %d:",c);
// }

// #include <stdio.h>

// int main()
// {
//     printf("shivani home\n" );
//     printf("Hanamkonda\n" );
//     printf("suraram elkathuthy\n" );
//     printf("HNO:5-65\n" );
// }


//write a student address using user defined function

// #include <stdio.h>
// void address();
// void main(){
//     printf("executing user defined function\n");
//     address();
// }
// void address(){
//     printf("shivani home\n" );
//     printf("Hanamkonda\n" );
//     printf("suraram elkathuthy\n" );
//     printf("HNO:5-65\n" );
// }


//write a c program to erform addition of twio numbers

// #include  <stdio.h>
// int add(int x ,int y);
// int main(){
//     int a ,b,c;
//     printf("enter two numbers");
//     scanf("%d%d",&a,&b);
//     c= add(a,b);
//     printf("addition of two numbers=%d",c);
// }
// int add(int x,int y){
//     return x+y;
// }

//write a program to print division ooof two numebrs
// #include  <stdio.h>
// float div(int x ,int y);
// float main(){
//     int a ,b,c;
//     printf("enter two numbers");
//     scanf("%f %f",&a,&b);
//     c= div(a,b);
//     printf("division of two numbers=%d",c);
// }
// float div(int x,int y){
//     return x/y;
// }


//write a program to area area of circle
// #include  <stdio.h>
// float area(int r);
// float main(){
//     int r,c;
//     printf("enter radius");
//     scanf("%d",&r);
//     c= area(r);
//     printf("area of circle=%d",c);
// }
// float area(int r){
//     float b;
//     b=3.14*r*r;
//     return b;
// }

//write a program to print sum of natural numbers
// #include  <stdio.h>
// int Sum(int n);
// int main(){
//     int c,r;
//     printf("enter range");
//     scanf("%d",&r);
//     c= Sum(r);
//     printf("SumofNatural numbers=%d",c);
// }
// int Sum(int n){
//     int sum=0;
//     for(int i=1;i<=n;i++){
//         sum=sum+i;
//     }
//     return sum;
// }

// //write a program to print 10 numbers
// #include  <stdio.h>
// int print(int n);
// int main(){
//     int c,r;
//     printf("enter range:");
//     scanf("%d",&r);
//     c= print(r);
    
// }
// int print(int n){
//     int sum=0;
//     for(int i=1;i<=n;i++){
//         printf("%d\t",i);
//     }
    
// }

//write a program to print numebrs in given range by using user defined function
#include  <stdio.h>
int print(int start,int end);
int main(){
    
    int x,y;
    printf("enter range:");
    scanf("%d %d",&x,&y);
    print(x,y);
    
}
int print(int start,int end){
    for(int i=start;i<=end;i++){
        printf("%d\t",i);
    }
    
}

// //write a c program to check given numbers is prime or not_eq// 
// #include  <stdio.h>
// int prime(int x);
// int main(){
//     int n;
//     printf("enter number to check prime or not:");
//     scanf("%d",&n);
//     prime(n);
    
// }
// int prime(int x){
//     int count=0;
//     for(int i=1;i<=x;i++){
//         if(x%i==0)
//             count++;
        
//     }
//     if(count==2){
//         printf("prime");
//     }
//     else{
//         printf("non-prime");
//     }
    
// }

// #include<stdio.h>
// void main(){
//     int r,digit=0,n;
//     printf("enter number:");
//     scanf("%d",n);
//     while(n!=0){
//         r=n/10;
//         digit=digit*10+r;
//         n=n/10;
//     }
//     printf("reverse of given number is=%d",digit);
// }




