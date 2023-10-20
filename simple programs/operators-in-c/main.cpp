/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;
int main(){
int num1 = 240;
int num2 = 40;
//INCREMENT operator
num1++; num2--;
cout<<"num1++ is: "<<num1<<endl;
cout<<"num2-- is: "<<num2;
//ARITHMETIC operator
cout<<"num1 + num2: "<<(num1 + num2)<<endl;
cout<<"num1 - num2: "<<(num1 - num2)<<endl;
cout<<"num1 * num2: "<<(num1 * num2)<<endl;
cout<<"num1 / num2: "<<(num1 / num2)<<endl;
cout<<"num1 % num2: "<<(num1 % num2)<<endl;
//RELATIONAL operator
if (num1==num2) {
cout<<"num1 and num2 are equal"<<endl;
}
else{
cout<<"num1 and num2 are not equal"<<endl;
}
if( num1 != num2 ){
cout<<"num1 and num2 are not equal"<<endl;
}
else{
cout<<"num1 and num2 are equal"<<endl;
}
if( num1 > num2 ){
cout<<"num1 is greater than num2"<<endl;
}
else{
cout<<"num1 is not greater than num2"<<endl;
}
if( num1 >= num2 ){
cout<<"num1 is greater than or equal to num2"<<endl;
}
else{
cout<<"num1 is less than num2"<<endl;
}
if( num1 < num2 ){
cout<<"num1 is less than num2"<<endl;
}
else{
cout<<"num1 is not less than num2"<<endl;
}
if( num1 <= num2){
cout<<"num1 is less than or equal to num2"<<endl;
}
else{
cout<<"num1 is greater than num2"<<endl;
}
//LOGICAL operator
bool b1 = true;
bool b2 = false;
cout<<"b1 && b2: "<<(b1&&b2)<<endl;
cout<<"b1 || b2: "<<(b1||b2)<<endl;
cout<<"!(b1 && b2): "<<!(b1&&b2);
//ASSIGNMENT operator
num2 = num1;
cout<<"= Output: "<<num2<<endl;
num2 += num1;
cout<<"+= Output: "<<num2<<endl;
num2 -= num1;
cout<<"-= Output: "<<num2<<endl;
num2 *= num1;
cout<<"*= Output: "<<num2<<endl;
num2 /= num1;
cout<<"/= Output: "<<num2<<endl;
num2 %= num1;
cout<<"%= Output: "<<num2<<endl;
//BITWISE operator
int result = 0;
result = num1 & num2;
cout<<"num1 & num2: "<<result<<endl;
result = num1 | num2;
cout<<"num1 | num2: "<<result<<endl;
result = num1 ^ num2;
cout<<"num1 ^ num2: "<<result<<endl;
result = ~num1;
cout<<"~num1: "<<result<<endl;
result = num1 << 2;
cout<<"num1 << 2: "<<result<<endl;
result = num1 >> 2;
cout<<"num1 >> 2: "<<result;
return 0;
}
