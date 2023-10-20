/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
// #include <stdio.h>
// #include<string.h>
// int main()
// {
//     char str1[20];int x;
//     printf("enter the string:");
//     scanf("%s",&str1);
//     int len=strlen(str1);
//     printf("\n the lowercase letters are:\n");
//     for(int i=0;i<len;i++){
//         x=(int)str1[i];
//         if(x>97&&x<=122){
//             printf("%c",str1[i]);
//         }
//     }
// }

// #include <stdio.h>
// #include<string.h>
// int main()
// {
//     char str1[20];int x,count=0,c=0,c1=0;
//     printf("enter the string:");
//     scanf("%s",&str1);
//     int len=strlen(str1);
//     printf("the lowercase letters are");
//      for(int i=0;i<len;i++){
//         x=(int)str1[i];
//         if(x>97&&x<=122){
//             count++;
//             // printf("%c",str1[i]);
//         }
//     }
//     printf("the number of lowercase letters are:%d\n",count);
    
//     printf("\n the uppercase letters are:\n");
//     for(int i=0;i<len;i++){
//         x=(int)str1[i];
//         if(x>65&&x<=90){
//             c++;
//             // printf("%c",str1[i]);
//         }
//     }
//     printf("the number of upper case characters are %d\n:",c1);
    
//     printf("the number of special characters are:");
//       for(int i=0;i<len;i++){
//         x=(int)str1[i];
//         if((x>65&&x<=90)||(x>97&&x<=122)){
//             c1++;
//             // printf("%c",str1[i]);
//         }
//     }
//     printf("the number of special characters are%d\n:",c1);
// }

// #include <stdio.h>
// #include<string.h>
// int main()
// {
//     char str1[20];int x,count=0,c=0,c1=0;
//     printf("enter the string:");
//     scanf("%s",&str1);
//     int len=strlen(str1);
//     printf("the lowercase letters are");
//      for(int i=0;i<len;i++){
//         x=(int)str1[i];
//         if(x>97&&x<=122){
//             count++;
//             // printf("%c",str1[i]);
//         }
        
        
        
        
        
        
        
        
//write a program to check whether string contains ;ength8 uppercase lowercase and special char and one numerical

// #include<stdio.h>
// #include<string.h>
// void main(){
//     printf("enter string:");
//     scanf("%s",&str1);
//     int l=0,up=0,lw=0,num=0,spl=0;
//     x=(int)str1[i];
//     int len=strlen(str1);
//     for(int i=0;i<len;i++){
//         if(len>=8){
//             l++;
//             if(x>=65&&x<=90){
//                 up++;
//                 if(x>=97&&x<=122){
//                     lw++;
//                     if(x>=48&&x<=57){
//                         num++;
//                     }
                    
//                 }
//             }
//         }
//         else{
//           spl++;
//         }
//     }
//     if(l!=0&&up!=0&&lw!=0&&num!=0){
//         printf("your string is valid");
//     }
//     else{
//         printf("your string is invalid");
//     }
// }

//write a c progrm to print numbers of vowels and consonants from lower case and uupercase seperately

// #include<stdio.h>
// void main(){
//     char str1[30]="233";
//     int x;
//     x=(int)str1;
//     printf("%s",x);
    
// }

//write a c program to check given string is palindrome or not
// #include<stdio.h>
// #include<string.h>
// int palindrome(char n,int len){
//     int i;
//   if(n[i]!=n[len-i-1]){
//       flag=1;
//       break;
//   }
//     return flag;
// }
// void main(){
//     char str1[20];int flag;
//     printf("enter the string:");
//     scanf("%s",&str1);
//     int len=strlen(str1);
//     char temp[10];
//     temp=str1;
//     palindrome(temp,len);
//     if(flag)
//       printf("given string is a palindrome");
//     else
//       printf("givrn string is not palindrome");
// }

//write a c program to print 
//HYDERabad
#include <stdio.h>
#include<string.h>
int main()
{
    char str1[20];int x,y,i;
    printf("enter the string:");
    scanf("%s",&str1);
    int len=strlen(str1);
    printf("\n given string=%s",str1);
    scanf("\n length=%d",len);
    printf("\n Result=");
    x=(int)str1[0];
    if(x>=48 && x<=58){
        for(int i=0;i<len;i++){
            y=(int)str1[i];
            if(y>48&&y<=57)
            printf("%c",str1[i]);
        }
    }
    else if(x>=65 &&x<=90){
        for(i=0;i<len;i++){
            y=(int)str1[i];
            if(y>=97 && y<=122)
            printf("%c",str1[i]);
        }
    }
    else{
        for(int i=0;i<len;i++){
            y=(int)str1[i];
            if((y<=48 && y>=57)||(  y<=65 && y>=90) ||(y<=95 && y>=122))
            printf("%c",str1[i]);
        }
    }

        
     
}
        






