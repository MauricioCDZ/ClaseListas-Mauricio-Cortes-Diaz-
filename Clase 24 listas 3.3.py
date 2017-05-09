Lista=[1,2,1,5,0,3,6,7,4]
def pares(Lista):
    contador=0
    while contador < len(Lista):
        
        del Lista [contador]
        contador += 1
    return Lista
print(pares(Lista))
    
