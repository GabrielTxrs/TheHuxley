"""
Entrada
4.0 H
Saída
Hemacias 4.00/mm3: Baixo

Entrada
4.0 M
Saída
Hemacias 4.00/mm3: Normal

Entrada
5.38 M
Saída
Hemacias 5.38/mm3: Normal

Entrada
5.38 I
Saída
Hemacias 5.38/mm3: Alto

"""

def analisar_faixa(v,min,max):
    if (min <= v) and (v <= max): 
        return 'Normal'
    elif(v > max):
        return 'Alto'
    elif(v < min):
        return 'Baixo'

entrada = input().split()
valor   = float(entrada[0])
idade   = entrada[1]

def hemacias_mm(valor,idade):
   if  (idade == 'I'):
      return analisar_faixa(valor,3.9,5.36)
   elif(idade == 'M'):
      return analisar_faixa(valor,4,5.4)
   elif(idade == 'C'):
      return analisar_faixa(valor,4.07,5.37)
   elif(idade == 'H'):
      return analisar_faixa(valor,4.5,6.1)

print('Hemacias {:.2f}/mm3: {}'.format(valor,hemacias_mm(valor,idade)))









