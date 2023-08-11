"""
Entrada
3
2 3 5

Saída
N
"""

N = int(input(''))
lista    = input('')
caixa    = lista.split()

A  = int(caixa[0])
L  = int(caixa[1])
P  = int(caixa[2])

if (A >= N) and (L >= N) and (P >= N):
 print('S')
else:
 print('N')