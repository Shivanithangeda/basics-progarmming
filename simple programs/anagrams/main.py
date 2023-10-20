'''

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

'''
str1 = input()
str2 = input()

if(sorted(str1) == sorted(str2)):
    print("Strings are Anagrams.")
else:
    print("Strings are not Anagrams.")