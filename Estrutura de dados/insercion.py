def insd(x, v, u):
    if u < 0 or v[u] >= x:
        v[u + 1] = x
        return
    v[u + 1] = v[u]
    insd(x, v, u - 1)


def isr(v, n):
    if n == 1: return
    isr(v, n - 1)
    insd(v[n - 1], v, n - 2)

v = [6, 12, 31, 19, 27]
isr(v, len(v))
print(v)  # Deve imprimir [52, 46, 31, 27, 19]
