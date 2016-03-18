#Area bajo una curva
#Funcion (sin(x))^2 de 4 a 7 x³ / 3 - 2x² + 12
from decimal import *
from threading import *
from math import *
def f1(x,power,u=2):
    return (pow(x,3))/(3-(2*pow(x,2))+12)
def f2(x):
    return Decimal((1/(x+1)))
def smrare(b,a):
    sm=((b-a)/6)*(f2(a)+4*f2((a/2+b/2))+f2(b))
    return sm
def frange5(limit1, limit2 = None, increment = 1.):
  """
  Range function that accepts floats (and integers).

  Usage:
  frange(-2, 2, 0.1)
  frange(10)
  frange(10, increment = 0.5)

  The returned value is an iterator.  Use list(frange) for a list.
  """

  if limit2 is None:
    limit2, limit1 = limit1, 0.
  else:
    limit1 = float(limit1)

  count = int(ceil(limit2 - limit1)/increment)
  return (limit1 + n*increment for n in range(count))
getcontext().prec=200
y=int(input("Inserte el exponente\n"))
u=int(input("Inserte la multp de x\n"))
def test(y,u):
    """
    y = El exponente de la funcion
    u = El multiplicador de x
    """
    n=10000
    area=0
    a=10
    b=12
    width=de(b-a)/n
    sm=0
    
    for i in frange5(a,b,width):
        #fxa=f1(i,y,u)
        #fxb=f1(i+width,y,u)
        fxa=(i)
        fxb=f2(i+width)
        area=((fxa+fxb)/2)*width
        #fx=f1(i)
        #area=fx*width
        #print(sm)
        sm+=Decimal(area)
        #sm+=fx
    return sm

print (test(y,u))