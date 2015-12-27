def num(a,b):
    i = toRtn = 1
    for n in xrange(a,b):   
        i=1
        while n!=1:
            if n%2==0:
                n=n/2
            else:
                n=(n*3)+1
            i+=1
        toRtn = max(toRtn,i)
    return toRtn
print num(1,10)
print num(100,200)
print num(201,210)
print num(900,1000)
