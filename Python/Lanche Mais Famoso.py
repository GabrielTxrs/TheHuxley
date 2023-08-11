"""
Entrada
Hamburguer
Batata Frita
Hamburguer
Suco de Laranja
Hamburguer
FIM

Saída
Hamburguer - 3
"""
lista_lanches = list()
while True:
    lanche = input()
    if lanche == 'FIM':
        break
    lista_lanches.append(lanche)
maior = 0
maior_lanche = ''
for n in lista_lanches:
    if lista_lanches.count(n) > maior:
        maior = lista_lanches.count(n)
        maior_lanche = n

print('{} - {}'.format(maior_lanche, maior))