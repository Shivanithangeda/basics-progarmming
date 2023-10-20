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
		System.out.println("enter n:");
		int n=sc.nextInt();
		int prev=n;
		int digit=0;
		while(n!=0){
		    int rem=n%10;
		    digit=digit*10+rem;
		    n=n/10;
		}
	if(digit==prev)
	   System.out.println(digit+"is a palindrome ");
	else 
	   System.out.println(prev+"is not plaindrome");
	}
}
