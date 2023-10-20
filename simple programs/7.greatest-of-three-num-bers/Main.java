/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
// import java.util.*;
// public class Main
// {
// 	public static void main(String[] args) {
// 		Scanner sc=new Scanner(System.in);
// 		System.out.println("enter three numbers:");
// 		int a=sc.nextInt();
// 		int b=sc.nextInt();
// 		int c=sc.nextInt();
	    
// 	    if(a>b && a>c){
// 	        System.out.println(a+"is greater");
// 	    }
// 		else if(b>a && b>c){
// 	        System.out.println(b+"is greater");
// 	    }
// 	    else{
// 	        System.out.println(c+"is greater");
// 	    }
// 	}
// }


import java.util.*;
public class Main
{
	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		System.out.println("enter three numbers:");
		int a=sc.nextInt();
		int b=sc.nextInt();
		int c=sc.nextInt();
	    
	    int temp=a>b?a:b;
	    int result=temp>c?temp:c;
	    System.out.println(result);
	}
}
