/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
import java.util.*;
import java.lang.*;
public class Main
{
	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		System.out.println("enter n:");
		int low=sc.nextInt();
		int high=sc.nextInt();
		
		System.out.println("Armstrong numbers between"+low+"and"+high+"are:");
        for(int i=low;i<=high;i++){
	      int sum=0,temp,digit,
	      temp=n;
	      int len =order(n);
	    	while(temp!=0){
		    digit=temp%10;
		    sum=sum+(int)Math.pow(digit,len);
		    temp=temp/10;
		};
		if (sum==n)
		  System.order.print(n+" ");
	   }	

	}	
	
	
	
	static int order(int n){
		int len=0;
	    while(n!=0){
	        len++;
	        n=n/10;
	    }
	    return len;
		}
}
