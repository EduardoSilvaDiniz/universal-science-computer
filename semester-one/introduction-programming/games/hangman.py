import random
import os


def sorteia_palavra(lista_palavras):
    tamanho_da_lista = len(lista_palavras)
    sorteia_numero = random.randrange(0, tamanho_da_lista)
    palavra_sorteada = palavras[sorteia_numero]
    return palavra_sorteada


palavras = ["boi", "cavalo", "carro", "moto", "maça", "melancia"]

arquivo = open('palavras.txt', 'r')

for palavra in arquivo:
    palavras = palavra.split(" ")
    print(palavras)
    os.system("PAUSE")

arquivo.close()

palavra_secreta = sorteia_palavra(palavras)
resposta = ["__ " for letra in palavra_secreta]
tentativas = 6
acertou = False
for letra in resposta:
    print(letra, end=" ")

while(tentativas > 0 and not acertou):

    chute = input("\nSua vez: ").lower()

    if chute in palavra_secreta:
        i = 0
        for letra in palavra_secreta:
            if chute == letra:
                resposta[i] = chute.upper()
                i += 1
            else:
                i += 1
    else:
        tentativas -= 1

    if "__ " not in resposta:
        acertou = True

    for letra in resposta:
        print(letra, end=" ")

if tentativas == 0:
    print("Você foi enforcado. \n A palavra era: ", palavra_secreta)

if acertou:
    print("Você acertou a palavra secreta!")

os.system("PAUSE")