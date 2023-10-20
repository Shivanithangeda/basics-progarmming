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
    int space=sc.nextInt();
    for(int i=n;i>=0;i--){
        for(int k=1;k<=space;k++){
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



