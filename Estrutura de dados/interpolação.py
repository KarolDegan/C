def cisearch (x,v):
    c = 0
    n = len (v)
    p = 0
    u = n-1
    while p <= u:
        q = p + (u-p)*(x-v[p])// max (v[u]- v[p],1)
        if q<p or q>u: return c
        c += 1
        if x == v[q]: return c
        if x < v[q]: u = q-1
        else: p = q+1
    return c

v = [19,27,31,48,50,63,79]
print(cisearch(63,v))