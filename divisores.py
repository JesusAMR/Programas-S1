n=7000
for x in range(1,n):
    s=0
    ss=0
    for i in range(1,x):
        if x%i==0:
            s=s+i
        else:
            pass
    #print(s)
    for a in range(1,s):
        if s%a==0:
            ss=ss+a
        else:
            pass
    #print(ss)
    if ss==x:
        print(s,"y",ss," son numeros amigos")
    #print(s)        