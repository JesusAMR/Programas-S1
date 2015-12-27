from random import *

output=""

def random_letter(inp,cond):
	list_const=['1','2','3']
	list_vowel=['a','e','i','o','u']
	if(inp=='c'):
		x=choice(list_const)
	elif(inp=="v"):
		x=choice(list_vowel)
	return x.upper() if cond==True else x
	
y=raw_input("GIVE ME THE STRING: ")
for i in y:
	output=output+str(random_letter(i.lower(), i.isupper()))
print output

