"""
Entrada
4
1,2,3,4,5,6,7,8,9,10
5,6,7,8,9,10
4,7,8,9,10,11
3,4,5,6,7,8,9
5 6 7 8 9 10

Saída
Total de ganhadores: 2

Entrada
3
1,3,5,7,9,11
2,4,6,8,10,12,14,15
10,20,30,40,50,55
2 6 8 10 14 15
Saída
Total de ganhadores: 1

"""

num_apostas = int(input())
bolao = dict()

for i in range(num_apostas):
    apostas = input().split(',')
    for n in apostas:
       int(n)
    bolao[i] = apostas
    
# transformei todos os valores das apostas em inteiros,
# para que possam ser utilizados como chaves do dicionario, pois como strings, n�o podiam

resultado = input().split()

ganhadores = 0
for b in bolao.values():
    if all(item in b for item in resultado):
        ganhadores += 1
# mudei meu teste na linha 17, pois antes eu estava comparando se uma lista inteira 
# estava contida em outra, o que sempre retornava false
# no lugar, coloquei o comando all() em conjunto com uma compreens�o de listas para testar 
# se todos os elemento do resultado est�o contidos na aposta

print('Total de ganhadores: {}'.format(ganhadores))

