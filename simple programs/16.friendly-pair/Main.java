/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
public class Main
{
    
    static int div(int num){
        int sum=0;
        for(int i=1;i<num;num++){
            if(num%i==0)
              sum=sum+i;
        }
        return sum;
    }
    
	public static void main(String[] args) {
		int n1=30,n2=140;
		int sum1=div(n1);
		int sum2=div(n2);
		if(sum1/n1 ==sum2/n2)
		  System.out.println(n1+" "+n2+"are friendly pair numbers");
        else 
           System.out.println(n1+" "+n2+"are not friendly pair numbers");
	}
}
