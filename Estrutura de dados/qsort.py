def particiona(v,p,u):
    x = v[p]
    i = p-1
    j = u+1
    while True:
        j -= 1
        i += 1
        while v[j]<x: j -= 1
        while v[i]>x: i += 1
        if i<j: troca(v,i,j)
        else: return j

def troca(v,i,j):
    aux = v[i]
    v[i] = v[j]
    v[j] = aux

def qs(v,p,u):
    if p==u: return
    m = particiona(v,p,u)
    qs(v,p,m)
    qs(v,m+1,u)

def qsort(v):
    qs(v,0,len(v)-1)

v = [66,31,48,80,27,75,52,19]
qsort(v)
print(v)