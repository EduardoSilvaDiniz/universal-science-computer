import random
import copy

povoado = {}
sexo = ['m', 'f']
running = 0
lista = []
while running < 500:
    povoado['idade'] = random.randrange(20, 50)
    povoado['sexo'] = random.choice(sexo)
    peso = str(random.randrange(50, 120)) + "kg"
    povoado['peso'] = peso
    povoado['altura'] = random.randrange(140, 180)
    running += 1
    dict_copy = copy.deepcopy(povoado)
    lista.append(dict_copy)

print(len(lista))

for a in range(0, 500):
    print(lista[a])