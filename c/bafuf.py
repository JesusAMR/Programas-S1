def f2(x):
    return (1/(x+1))
n=100000
area=0
a=10
b=12
width=(b-a)/n
sm=0
for i in range(a*n,b*n,int(width*n)):
    #fxa=f1(i,y,u)
    #fxb=f1(i+width,y,u)
    fxa=f2(2*(i/n))
    fxb=f2(i+width)
    area=((fxa+fxb)/2)*width
    #fx=f1(i)
    #area=fx*width
    #print(sm)
    sm+=area
    #sm+=fx

print(sm)
