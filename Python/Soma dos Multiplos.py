"""
Entrada
6
Saída
8

"""
num_lim = int(input(''))

soma_mult = 0
num_lim = num_lim - 1
while num_lim > 0:
    if ((num_lim % 3) == 0) or ((num_lim % 5) == 0):
        if (num_lim % 3) != (num_lim % 5):
            if(num_lim % 3):
             soma_mult += num_lim
            if(num_lim % 5):
             soma_mult += num_lim
        else:
            soma_mult += num_lim
    num_lim -= 1

print(soma_mult)

