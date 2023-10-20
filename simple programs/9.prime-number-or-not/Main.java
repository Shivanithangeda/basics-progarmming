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
		System.out.println("enter number to check prime number or not:");
		int n=sc.nextInt();
		int count=0;
		for(int i=1;i<=n;i++){
		    if(n%i==0){
		        count++;
		    }
		}
		if(count==2){
		    System.out.println(n+"is a prime number");
		}
		else{
		    System.out.println(n+"is not a prime number");
		}
	}	
}
