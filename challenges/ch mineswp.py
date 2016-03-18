'''
mat =[[0 for x in xrange(para_lados)]for x in xrange(para_arribajo)]
mat[lista principal][listas adentro]
'''
fil = open('mines.txt','r')
listt = fil.readlines()
"""
u=[]
for i,v in enumerate(listt):
    x = v.replace(" ","").replace("\n","")
    listt[i]=x
    u.append(x)

for i in listt:
    print i
o=0
for num in u[0]:
    o=o+int(num)
print o
try:
    for line in fil:
        lineChar=line
        for char in lineChar:
            print char
        print line
finally:
    fil.close()
"""
def Tests(File):
    i=0
    for line in File:
        if line.replace(" ","").replace("\n","").isdigit():
            i+=1
        else:
            pass
    return i
def start(File):
    d=clean(File)
    n=Tests(d)
    u=getListRange(d)
    r=makeListReady(d,u)
    s= countAsterCol(r)
    s=map(str,s)
    for line in s:
        print line
def clean(File):
    for i,line in enumerate(File):
        x=line.replace("\n","")
        File[i]=x
    #print File
    return File
def getListRange(List):
    u=List.pop(0).split()
    u=map(int,u)
    return u
def makeListReady(first,sec):
    mat=[[0 for x in xrange(sec[1])]for x in xrange(sec[0])]
    #print mat
    #print first
    for x in xrange(0,sec[0]):
        for i in xrange(0,sec[1]):
            mat[x][i]=first[x][i]
    return mat
def countAsterCol(File):
    for x in xrange(0,len(File)):
        for i in xrange(0,len(File[0])):
            if File[x][i]!= '*':
                File[x][i]=0
            else:
                pass
    for x in xrange(0,len(File)):
        for i in xrange(0,len(File[0])):
            if File[x][i]== '*':
                File[x][i+1]+=1
                File[x+1][i]+=1
                File[x+1][i+1]+=1
                if not i==0:
                    File[x][i-1]+=1
            else:
                pass
    return File

            
start(listt)
'''
d=clean(listt)
print d
u=d.pop(0).split()
u=map(int,u)
print d
mat = [[0 for x in xrange(u[1])]for x in xrange(u[0])]
for x in xrange(0,u[0]):
    for i in xrange(0,u[1]):
        mat[x][i]='.'
print mat
"""
print mat
mat[0][1]='.'
print mat
"""
'''
