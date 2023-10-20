/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
// import java.util.*;
// import java.lang.*;
// public class Main
// {
// 	public static void main(String[] args) {
// 		Scanner sc=new Scanner(System.in);
// 		System.out.println("enter n:");
// 		int n=sc.nextInt();
// 		int len =order(n);
// 		int count=0,r,res,temp1,sum=0;
// 			if(armstrong(n,len))
// 			     System.out.println(n+"is a armstrong number");
		   
// 	      	else
// 		         System.out.println(n+"is not a armstrong number");
		
// 	}	
// 	static boolean armstrong(int n,int len){
// 	    int sum=0,temp,digit;
// 	    temp=n;
// 	    	while(temp!=0){
// 		    digit=temp%10;
// 		    sum=sum+(int)Math.pow(digit,len);
// 		    temp=temp/10;
// 		};
// 		return sum==n;
// 	}	

	
	
// 	static int order(int n){
// 		int len=0;
// 	    while(n!=0){
// 	        len++;
// 	        n=n/10;
// 	    }
// 	    return len;
// 		}
// }

#include<stdio.h>
#include<math.h>
armstrong(int n,int len);
length(int num);
void main(){
    int num,len=0;
    printf("enter number:");
    scanf("%d",&num);
    
    palindrome(num,len);
    length( num);
    if(armstrong(n,len)){
        printf()
    }
}
int length(int num){
     int len=0;
    while(num!=0){
        len++;
        num=num/10;
    }
    return len;
}
int armstrong(int n,int len){
    int temp=n,sum=0,power;
    while(n!=0){
        temp=temp%10;
        power=pow(temp,len);
        sum=sum+power;
        n=n/10;
    }
    return sum==n;
}

  














