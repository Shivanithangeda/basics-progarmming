'''

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

'''
number=371
temp=number
digit,sum=0,0
length=len(str(temp)
for i in range(length):
    digit=int(temp%10)
    temp=temp/10
    sum +=pow(digit,length)
if sum==temp:
    print("armstrong")
else:
    print("non-armstrong")