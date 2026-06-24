def intercalad(v,p,m,u):
    w = [0] *(u-p+1)
    (i,j,k) = (p,m+1,0)
    while i<=m and j<=u:
        if v[i]>v[j]: (w[k],k,i) = (v[i],k+1,i+1)
        else: (w[k],k,j) = (v[j],k+1,j+1)
    while i<=m: (w[k],k,i) = (v[i],k+1,i+1)
    while j<=u: (w[k],k,j) = (v[j],k+1,j+1)
    for k in range(0,u-p+1): v[p+k] = w[k]

def ms(v,p,u):
    if p==u: return
    m = (p+u)//2
    ms(v,p,m)
    ms(v,m+1,u)
    intercalad(v,p,m,u)

def msortd(v):
    ms(v,0,len(v)-1)


v = [66,31,48,80,27,75,52,19]
msortd(v)
print(v)