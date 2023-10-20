/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
// import java.util.*;
// public class Main
// {
// 	public static void main(String[] args) {
// 		Scanner sc=new Scanner(System.in);
// 		System.out.println("enter number to check prime number in given range");
// 		int low=sc.nextInt();
// 		int high=sc.nextInt();
// 		int count=0;
		
// 		for(int i=low;i<=high;i++){
// 		    if(i==0 || i==1){
// 		        continue;
// 		    }
// 		    int flag=1;
// 		    for(int j=2;j<=i/2;++j){
// 		        if(i%j==0){
// 		            flag=0;
// 		            break;
// 		        }
// 		    }
// 		    if(flag==1)
// 		       System.out.print(i+" ");
// 		}
	
// 	}	
// }

//print numbers of primes in guven range
#include<stdio.h>
void main(){
    int s,e,count=0;int j,=0;
    printf("enter the range:");
    scanf("%d %d",&s,&e);
    while(s<=e){
        count=0;
        for( j=1;j<=s;j++){
            if(s%j==0){
                count++;
            }
        }
          if(count==2){
              printf("%d\t",s);
              count++;
             
          }
          s++;
    }
        printf("%d\t",c);
}

