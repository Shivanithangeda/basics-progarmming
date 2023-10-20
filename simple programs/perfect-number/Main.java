/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
public class Main
{
	public static void main(String[] args) {
	   int n=7,sum=0;
	   for(int i=1;i<n;i++){
	       if(n%i==0){
	           sum=sum+i;
	       }
	   }
	   if(sum==n)
	     System.out.println("Perfect Number");
	   else 
	     System.out.println("Not Perfect Number");
	}
}
