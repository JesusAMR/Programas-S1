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
def start(File):
    d=clean(File)
    u=getListRange(d)
    makeListReady(d,u)
    print u
def clean(File):
    for i,line in enumerate(File):
        x=line.replace("\n","")
        File[i]=x
    return File
def getListRange(List):
    u=List.pop(0).split()
    u=map(int,u)
    return u
def makeListReady(first,sec):
    mat=[[0 for x in xrange(sec[1])]for x in xrange(sec[0])]
    print mat
    print first
    for x in xrange(0,sec[0]):
        for i in xrange(0,sec[1]):
            mat[x][i]=first[x][i]
    print mat
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
