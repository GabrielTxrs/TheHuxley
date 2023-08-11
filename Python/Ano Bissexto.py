"""
Entrada
3000
Saída
NAOBISSEXTO

Entrada
20
Saída
BISSEXTO

Entrada
2450
Saída
NAOBISSEXTO

Entrada
700
Saída
NAOBISSEXTO

Entrada
440
Saída
BISSEXTO

Entrada
980
Saída
BISSEXTO

Entrada
5600
Saída
BISSEXTO

Entrada
2000
Saída
BISSEXTO

Entrada
100290
Saída
NAOBISSEXTO
"""
ano = int(input())

if (ano % 4 == 0 and ano % 100 != 0) or ano % 400 == 0:
 print('BISSEXTO')

else:
 print('NAOBISSEXTO')


