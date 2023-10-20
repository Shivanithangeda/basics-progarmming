'''

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

'''
#FIND EQUAL POINT IN A STRING OF BRACKETS
def index(str):
    count=0
    l=len(str)
    for i in range(1,l):
        if(str[i]==')'):
            count +=1
    for i in range(1,l):
        if(count==i):
            return i
    return l
str="(()))(()()())))"
print(index(str))

#


