/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
import java.util.*;
public class Main
{
	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		System.out.println("enter the year to check whether leap year or not:");
		int n=sc.nextInt();
		if((n%400==0)|| (n%4==0)&&(n%100!=0)){
		    System.out.println(n+"is a leap year");
		}
		else{
		    System.out.println(n+"is not a leap year");
		}
	}	
}
