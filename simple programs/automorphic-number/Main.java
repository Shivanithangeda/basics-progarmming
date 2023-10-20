/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
public class Main
{
    
	public static void main(String[] args) {
		int num=7;
        int square=num*num;
        int last_digit=square%10;
        if(last_digit==num)
           System.out.println("Automorphic number");
        else 
           System.out.println("not Automorphicnumber");
	}
}
