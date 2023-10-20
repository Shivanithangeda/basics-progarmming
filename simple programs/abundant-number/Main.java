/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
public class Main
{
    static int demo(int num){
        int s1=0;
        for(int i =0;i<num;i++){
            if(num%i==0)
              s1=s1+i;
        }
        return s1;
    }
    
	public static void main(String[] args) {
		int num=56;
		int sum=demo(num);
		if(sum>num)
		    System.out.println(num+"is abundant number");
		else
		    System.out.println(num+"is not abundant number");
	}
}
