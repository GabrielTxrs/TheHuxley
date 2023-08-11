"""
Entrada
-2
2
Saída
3
"""
a = int(input(''))
b = int(input(''))


def maior(a,b):
 return a if a > b else b

def menor(a,b):
 return a if a < b else b
 
def somatorioPOS(i,n):
 men = menor(i,n)
 mai = maior(i,n)   
 soma = men
 while men < mai:
  men += 1 
  soma += men 
 return soma  

def somatorio(a,b):
    if a < 0 and b < 0:
     return 0
    elif a >= 0 and b >= 0:
     return somatorioPOS(a,b)
    else:
     return somatorioPOS((menor(a,b)*(-1)+menor(a,b)),maior(a,b))
   
print(somatorio(a,b)) 
