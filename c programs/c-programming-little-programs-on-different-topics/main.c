/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
//some program on VARIABLES 
//#include<stdio.h>
//int main()
//{
  //  int var1= 2;
    //int var2;
    //var2=var1;
    //printf("%d",var2);
    //return 0;
//}



//some program on VARIABLES 
//#include<stdio.h>
//int main()
//{
  //  int var1,var2,var3;
    //var1=var2=var3=22;
    //printf("%d\n",var1);
    //printf("%d\n",var2);
    //printf("%d\n",var3);

    //return 0;
//}    
    


//to knoe size of an integer
//#include <stdio.h>

//int main()
//{
  //  printf("%d",sizeof(int));

    //return 0;
//}



// EXAMPLE PROGRAMS ON LONG AND SHORT MODIFIERS
//#include<stdio.h>
//#include<limits.h> // header file used for symboic constants
//int main()
//{
  //  int var1=INT_MIN;   //int_max,int_min are symbolic constants
    //int var2=INT_MAX;
    //printf("range of signed integer is from:%d to %d",var1,var2);
    //return 0;
//}


//#include<stdio.h>
//#include<limits.h> // header file used for symboic constants
//int main()
//{
  //  unsigned int var1= 0;
    //unsigned int var2= UINT_MAX;
    //printf("range of unsigned integers is from:%u to %u",var1,var2);
    //return 0;
//}


//#include<stdio.h>
//#include<limits.h> // header file used for symboic constants
//int main()
//{
  //  short int var1= SHRT_MIN;
    //short int var2= SHRT_MAX;
    //printf("range of short signed integers is from:%d to %d",var1,var2);
    //return 0;
//}


//#include<stdio.h>
//#include<limits.h> // header file used for symboic constants
//int main()
//{
  //  short unsigned int var1=0;
    //short unsigned int var2= USHRT_MAX;
    //printf("range of short unsigned integers is from:%u to %u",var1,var2);
    //return 0;
//}    

//EXCEEDING VALID RANGE OF INTEGER
//#include<stdio.h>
//int main()
//{
  //  int var=2147483648;
   // printf("%d",var);
    
//}

//#include<stdio.h>
//int main()
//{
  //  int var=-2147483649;
    //printf("%d",var);
//}

//EXCEEDING VALID RANGE OF CHARACTER
//#include<stdio.h>
//int main()
//{
  //char var='s';
  //printf("%c",var);
//}

//#include<stdio.h>
//int main()
//{
  //char var=65;
  //printf("%c",var);
//}

//#include<stdio.h>
//int main()
//{
  //  char var=130;
    //printf("%c",var);
    //return 0;
//}

//FLOAT,DOUBLE,LONG DOUBLE DATATYPE
//#include<stdio.h>
//int main()
//{
  //  float var1= 3.141592653589732;
    //float var2= 3.141592653589732;
    //float var3= 3.14159265358973213456;
    
//    printf("%d\n",  sizeof(float));
  //  printf("%d\n",  sizeof(double));
//    printf("%d\n",  sizeof(long double));
  //  printf("%.16f\n",  var1);
    //printf("%.16f\n",  var2);
    //printf("%.21lf\n",  var3);
//}

//#include<stdio.h>
//int main()
//{
   
//    int var= 4/9;
 //   printf("%d\n",var);
    
   // float var1= 4/9;
//    printf("%.2f\n",var1);
    
  //  float var2= 4.0/9.0;
//    printf("%.2f\n",var2);
//}


//  QUESTIONS
//1.//#include<stdio.h>
//int main()
//{
  //  printf("%d", printf("%s", "hello shivani"));
    //return 0;
//}

//#include<stdio.h>
//int main()
//{
  //  printf("%s\n","shivani");
    //printf("%10s","shivani");
    //return 0;
//}

//#include<stdio.h>
//int main()
//{
  //  char c =252;
//    c=c+10;
  //  printf("%d",c);
    //return 0;
//}

//#include<stdio.h>
//int main(){
//    unsigned i=1;
  //  int j=-4;
    //printf("%u",i+j);
    //return 0;
//}

//#include<stdio.h>
//int main(){
//    unsigned i=1;
  //  int j=-4;
    //printf("%d",i+j);
    //return 0;
//}
/*
static modifier
#include<stdio.h>
int main()
{
    printf("%d",func());
    printf("\n%d",func());
    return 0;
}
int func()
{
    static int count=0;
    count++;
    return count;
}*/

                              


