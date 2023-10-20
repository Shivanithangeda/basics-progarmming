'''

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

'''
#REMOVE DUPLICATES AND PRINT UNIQUE ELEMENTS in array
def check(arr,n):
    for i in range(0,n):
        d=0
        for j in range(0,i):
            if(arr[i]==arr[j]):
                d=1
                break
        if(d==0):
            print(arr[i],end=" ")

arr=[6,3,4,3,4]
n=len(arr)
check(arr,n)
        