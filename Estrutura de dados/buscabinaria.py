def cbsearch (x,v):
    c = 0
    n = len (v)
    p = 0
    u = n -1
    while p <= u:
        m = (p+u)//2
        c += 1
        if x == v[m]: return c
        if x < v[m]: u = m-1
        else: p = m+1
    return c

v = [19,27,31,48,50,63,79]
for x in v: print('c(%s) = %s' % (x,cbsearch(x,v)))
sum ([cbsearch (x,v) for x in v])/ len (v)

