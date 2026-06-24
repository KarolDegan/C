def selmin(v,u):
    if u == 0: return 0
    return u if v[u] < v[selmin(v,u-1)] else selmin(v,u-1)

def troca(v,i,j):
    aux = v[i]
    v[i] = v[j]
    v[j] = aux

def ssr(v, n):
    if n == 1: return
    troca(v, selmin(v,n-1), n - 1)
    ssr(v, n - 1)


v = [46, 52, 31, 19, 27]
ssr(v,len(v))
print(v)

