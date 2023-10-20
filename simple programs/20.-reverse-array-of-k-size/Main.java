/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
//import java.util.Math;
class Main{
    
    
     static void reverse(int arr[],int n,int k ){
        for(int i=0;i<n;i+=k){
            int left=i;
            int right=Math.min(i+k-1,n-1);
            int temp=0;
            while(left<right){
                temp=arr[left];
                arr[left]=arr[right];
                arr[right]=temp;
                left++;
                right--;
            }
        }
    }
    
     public static void main(String[] args)
    {
         
        int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};
        int k = 3;
     
        int n = arr.length;
     
        reverse(arr, n, k);
     
        for (int i = 0; i < n; i++)
            System.out.print(arr[i] + " ");
    }
}
