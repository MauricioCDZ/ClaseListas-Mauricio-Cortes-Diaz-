Lista=[-1,6,9,3,-7,-9]
def Negativos(Lista):
    contador=0
    while contador < len(Lista):
        k=Lista[contador]
        if k < 0:
            Lista[contador]=0
        else:
            pass
        contador +=1
    return Lista
print(Negativos(Lista))
