def odds(start=1):
    '''return all odd numbers'''
    if int(start) % 2 == 0: start = int(start) + 1
    while True:
        yield start
        start += 2
for n in odds():
    if n>7: break
    else: print(n)
