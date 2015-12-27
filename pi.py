from sys import argv
name,n1,n2=argv

def long(n):
        y=0
        while(n>=1):
                n=n/10
                y=y+1
        return y
z=long(int(n1))
o=long(int(n2))

print z,o
