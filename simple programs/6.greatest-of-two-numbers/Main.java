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
		System.out.println("enter two numbers:");
		int n1=sc.nextInt();
		int n2=sc.nextInt();
		if(n1>n2){
		    System.out.println(n1 +" is greater");
		}
		else{
		    System.out.println(n2+ "is greater");
		}
	}	
}
