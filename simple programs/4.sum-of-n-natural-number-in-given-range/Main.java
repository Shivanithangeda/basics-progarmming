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
// 		System.out.println("enter n:");
// 		int n=sc.nextInt();
	
// 		   System.out.println(n*(n+1)/2);
// 	}
// }

import java.util.*;
public class Main
{
	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		System.out.println("enter n:");
		int n=sc.nextInt();
		int sum=recur(n);
		System.out.println(sum);
}
static int recur(int n){
    if(n==0)
      return n;
      
    return  n+recur(n-1);
   }
}
