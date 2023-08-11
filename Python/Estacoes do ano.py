"""
Há quatro estações no ano: verão, outono, inverno e primavera. 
Esses períodos são definidos com base em padrões ou variações climáticas. 

Estações do ano no hemisfério norte:

verão: de 21 de junho a 20 de setembro;
outono: de 21 de setembro a 20 de dezembro;
inverno: de 21 de dezembro a 20 de março;
primavera: de 21 de março a 20 de junho.
Estações do ano no hemisfério sul:

verão: de 21 de dezembro a 20 de março; 
outono: de 21 de março a 20 de junho; 
inverno: de 21 de junho a 20 de setembro;
primavera: de 21 de setembro a 20 de dezembro.
Elabore um programa que contenha uma função que receba como 
parâmetros: hemisfério, dia e mês e exiba a estação do ano correspondente.

Formato de entrada
Três números inteiros, representando o hemisfério (0 - norte, 1 - sul), o dia e o mês nessa sequência.

Formato de saída
Uma cadeia de caracteres em letras maiúsculas, sem acentuação.
Entrada
1
1
8

Saída
INVERNO


Entrada
0
1
8

Saída
VERAO
 

"""


hemisferio = int(input())
dia = int(input())
mes = int(input()) 

def EstacaoAno(hemisferio,dia,mes):
 VERAO     = (mes == 7  or mes == 8 ) or (21 <= dia and mes == 6 ) or (dia <= 20 and mes == 9 )
 OUTONO    = (mes == 10 or mes == 11) or (21 <= dia and mes == 9 ) or (dia <= 20 and mes == 12)
 INVERNO   = (mes == 1  or mes == 2 ) or (21 <= dia and mes == 12) or (dia <= 20 and mes == 3 )
 PRIMAVERA = (mes == 4  or mes == 5 ) or (21 <= dia and mes == 3 ) or (dia <= 20 and mes == 6 )
 if   hemisferio == 0:
    if   VERAO:
        return 'VERAO'
    elif OUTONO:
        return 'OUTONO'   
    elif INVERNO:
        return 'INVERNO'
    elif PRIMAVERA:
        return 'PRIMAVERA'
 elif hemisferio == 1:
    if   VERAO:
        return 'INVERNO'
    elif OUTONO:
        return 'PRIMAVERA'
    elif INVERNO:
        return 'VERAO'
    elif PRIMAVERA:
        return 'OUTONO'    

print(EstacaoAno(hemisferio,dia,mes))