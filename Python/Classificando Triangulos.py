def invalido(a,b,c):
 if((a + b > c) and (a + c > b) and (b + c > a)):
   return False
 else: 
   return True

def tipo_triangulo(l1,l2,l3):
 if invalido(l1,l2,l3):
    return 'INVALIDO'
 elif l1 == l2 and l2 == l3:
    return 'EQUILATERO'
 elif l1 == l2 or l2 == l3 or l1 == l3:
    return 'ISOSCELES'
 elif l1 != l2 and l2 != l3 and l1 != l3:
    return 'ESCALENO'

while True:
 entrada = input()
 if entrada == 'FIM':
  break
 entrada = entrada.split()
 l1 = int(entrada[0])
 l2 = int(entrada[1])
 l3 = int(entrada[2])
 print(tipo_triangulo(l1,l2,l3))
