x=1.0
res=0.0
y=1


def primo(n):
        if(n%2==0):
                return False
        else:
                return True

while(y<1000):
        if(y>1):
		res=res-(x/float(y))+(x/float(y+z))
		y=y+z
	if(y==1):
		res=x/float(y)
		y=3
	print res,y
