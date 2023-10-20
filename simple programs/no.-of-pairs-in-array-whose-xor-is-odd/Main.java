/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
public class Main
{
    static int check(int arr[],int n){
        int count=0;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                 
                   if((arr[i]^arr[j])%2!=0)
                       count++;
                   
            }
        }
        return count;
    }
	public static void main(String[] args) {
		int arr[]={1,2,3,4,5};
		int n=arr.length;
		System.out.println(check(arr,n));
	}
}
