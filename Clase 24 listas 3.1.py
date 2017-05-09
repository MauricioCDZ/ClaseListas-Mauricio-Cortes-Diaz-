Lista=[2,4,6,3,8,12,7,45]

def Mayor(Lista):
    contador=0
    mayor=0
    while contador < len(Lista):
        k=Lista[contador]
        if k > mayor:
            mayor=k
        else:
            mayor=mayor
        contador += 1
    return mayor
print(Mayor(Lista))
    
