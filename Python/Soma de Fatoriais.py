'''
Escreva um programa que receba como entrada 5 nimeros inteiros positivos,
e exiba a soma dos fatoriais daqueles que sao multiplos de 3.

Entrada
3
14
7
6
5

Saída
726
'''

n1 = int(input())
n2 = int(input())
n3 = int(input())
n4 = int(input())
n5 = int(input())

lista = list()

def fat(n):
   if n == 0:
      return 1
   else:
      return n*fat(n-1) 

if n1 % 3 == 0:
  lista.append(fat(n1))
if n2 % 3 == 0:
  lista.append(fat(n2))
if n3 % 3 == 0:
  lista.append(fat(n3))
if n4 % 3 == 0:
  lista.append(fat(n4))
if n5 % 3 == 0:
  lista.append(fat(n5))


      
def soma(lista):
   if lista == []:
      return 0
   else:
      return lista[0] + soma(lista[1:])

print(soma(lista))
 

