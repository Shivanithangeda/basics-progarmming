'''

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

'''
def distance(s1,w1,w2):
    if w1==w2:
        return 0
    words=s1.split(" ")
    min=len(words)+1
    
    for i in range(len(words)):
        if words[i]==w1:
            for j in range(len(words)):
                if words[j]==w2:
                    cur=abs(i-j)-1;
                    
                    if cur<min:
                        min=cur
    return min;
    
s1="geeks for geeks contribute practice"
w1="geeks"
w2="practice"
print(distance(s1,w1,w2))