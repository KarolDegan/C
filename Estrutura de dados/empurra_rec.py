def empurra_rec(v, u):
    if u == 0: return
    empurra_rec(v, u - 1)
    if v[u] > v[u-1]:
        aux = v[u]
        v[u] = v[u-1]
        v[u-1] = aux
    
def bsort(v):
    n = len(v)
    for i in range(1,n):
        for j in range(0,n-i):
            if v[j] < v[j+1]:
                empurra_rec(v,j+1)    

v = [28, 82, 38, 99, 75, 19, 69, 46, 27]
bsort(v)
print(v)

#empurra iterativo
#def empurra(v, u):
#    for i in range (u):
#        if v[i] < v[i+1]:
#            aux = v[i]
#            v[i] = v[i+1]
#            v[i+1] = aux