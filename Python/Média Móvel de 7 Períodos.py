"""
Entrada
3
10-20-30-35-35-40-40
20-30-35-35-40-40-45
30-35-35-40-40-45-55
Saída
30.00
35.00
40.00

Entrada
1
10-20-30-35-35-40-40
Saída
30.00
"""

num = int(input())

i = 0
soma = 0
while i < num:
    media = input().split('-')
    for b in range(7):
        soma = soma + int(media[b])
    print('%.2f' % (soma/7))
    i += 1
    soma = 0











