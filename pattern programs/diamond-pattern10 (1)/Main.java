/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
import java.util.Scanner;
public class Main
{
	public static void main(String[] args) {
	    Scanner sc=new Scanner(System.in);
    int n=sc.nextInt();
    int space=10;
    for(int i=1;i<=n;i++){
        for(int k=1;k<=space;k++){
            System.out.print(" ");
        }
        space--;
        for(int j=1;j<=i;j++){
            System.out.print(" *");
        }
      System.out.println("");  
	}
	space=10;
    for(int i=n-1;i>=0;i--){
        for(int k=n-1;k<=space;k++){
            System.out.print(" ");
        }
        space++;
        for(int j=1;j<=i;j++){
            System.out.print(" *");
        }
      System.out.println("");  
	}
	}
}




