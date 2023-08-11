"""
Entrada
G
2
5
6
Saída
3.915

Entrada
H
2
5
6
Saída
3.462

Entrada
A
2
5
6
Saída
4.333

"""

media=input('')
n1=float(input(''))
n2=float(input(''))
n3=float(input(''))

mediaA= (n1+n2+n3)/3

mediaH= 3/(1/n1 + 1/n2 + 1/n3)

mediaG= (n1*n2*n3)**(3**-1)

if media == 'A':
 print('{:.3f}'.format(mediaA))
if media == 'H':
 print('{:.3f}'.format(mediaH))
if media == 'G':
 print('{:.3f}'.format(mediaG))