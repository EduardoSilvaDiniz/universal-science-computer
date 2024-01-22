import random

acertou = False;
num = random.randrange(1, 50)

print(num)
while (not acertou):
    chute = int(input("Chute um Numero: "))
    if (chute == num):
        acertou = True
    elif (chute <= num):
        print("é maior\n tente novamente")
    elif (chute >= num):
        print("é menor\n tente novamente")

print("Vc acertou!")