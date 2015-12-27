x = int(raw_input('Number of test cases:\n'))
d=[]
fechas=['D1','H1','M1','S1','D2','H2','M2','S2']
for y in range(0,x):
    for i in range(0,8):
        d.append(int(raw_input('> Insert date in form:'+fechas[i]+'\n')))
    print d
