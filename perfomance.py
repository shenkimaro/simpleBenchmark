# -*- coding: utf-8 -*-


import datetime

print("Usando python:")
max = pow(10,9)

def soma(a, b):
    return a+b

cont = 0;
inicio = datetime.datetime.now().timestamp()
for x in range(max):
    cont +=1    
    #cont = soma(cont,1)
    
fim = datetime.datetime.now().timestamp()

print("Laço direto: "+ str(cont) + " em " + str(fim - inicio))



