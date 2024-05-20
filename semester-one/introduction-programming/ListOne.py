import math;    #biblioteca math para calcular raiz quadrada.

lang = input("Digite o Numero do Exercicio da Lista: ")

match lang:
    case"1":
        print("Programa que imprime a média aritmética de 8,9,7 e de 4,5,6 E a Soma das 2 Medias mas a media da soma");
        media1 = (8 + 9 + 7) / 3;
        print(f'Media de 8,9,7 : {media1}');
        media2 = (4 + 5 + 6) / 3;
        print(f'Media de 4,5,6 : {media2}');
        result = media1 + media2;
        print(f'a soma das medias :{result}');
        result = (media1 + media2) / 2;
        print(f'a media da soma das duas medias : {result}');
        
    case"2":
        print("Ler o seu nome e sua ano de nacimento, caso você tenha 18 anos ou mais sua entrada é permitida")
        nome = input("Digite seu Nome: ");
        ano_naci = int(input("Digite seu ano de nacimento: "));
        ano_atual = 2023;
        result = ano_atual - ano_naci;
        if result >= 18:
            print(f'{nome} sua idade é {result}, sua entrada foi permitida.');
        else:
            print(f'{nome} sua idade é {result}, Sua entrada não é permitida.');
        
    case"3":
        print("Calcula prestação, se prestação for maior que 20% do salario é negado")
        salario = float(input("Digite seu Salario: "));
        prestacao = float(input("Digite sua Prestação: "));
        salario_20 = salario * 0.2;
        if prestacao > salario_20:
            print("Empréstimo não pode ser concedido.");
        else:
            print("Emprestimo pode ser concedido.");
        
    case"4":
        print("informar um saldo e imprimir o saldo com reajuste de 1%")
        salario = float(input("Digite seu Salario: "));
        print("Salario : " + str(salario));
        reajuste = salario * 0.1;
        result = salario + reajuste;
        print("Salario com reajuste de 1% : " + str(result));
        
    case"5":
        print("informar um número e imprimir se é par ou ímpar.")
        num = int(input("Digite um Numero: "));
        result = num % 2;
        if result == 0:
            print("Par");
        else:
            print("Impar");
        
    case"6":
        print("Ler 1 número. Se positivo, imprimir raiz quadrada senão o quadrado do número.")
        num = int(input("Digite um Numero: "));
        if num >= 0:
            result = math.sqrt(num);
            print(f'\nA raiz quadrada de {num} é {result}\n')
        else:
            result = num * num;
            print(f'\nO Quadrado de {num} é {result}');
        
    case"7":
        print("Ler um número e imprimir igual a 20, menor que 20, maior que 20.");
        num = int(input("Digite um Numero: "));
        if num == 20:
            print("igual a 20");
        elif num < 20:
            print("menor que 20");
        elif num > 20:
            print("maior que 20");

    case"8":
        print("algoritmo que receba 3 números e informe qual o maior entre eles");
        num=list(range(3));
        for i in range(3):
            num[i] = int(input("Digite um Numero: "));
        if num[0] > num[1]:
            result = num[0]
        else:
            result = num[1]
        
        if result > num[2]:
            print(f'o numero {result} é o maior')
        else:
            print(f'o Numero {num[2]} é o maior')


    case"9":
        print("algoritmo que le dois números nas variáveis NumA e NumB, e inverte seus valores ex: NumA = 5 e NumB = 9, NumA = 9 e NumB = 5.");
        numA = int(input("Digite Numero A: "));
        numB = int(input("Digite Numero B: "));
        aux = numA;
        numA = numB;
        numB = aux;
        print(f'Valor de A {numA}');
        print(f'Valor de B {numB}');

    case"10":
        print("algoritmo que le dois números e mostra se são iguais ou se são diferentes, E organiza em ordem crecente");
        num1 = int(input("Digite o Primeiro Numero: "));
        num2 = int(input("Digite o Segundo Numero: "));
        if num1 == num2:
            print("São Iguais");
        else:
            print("São Diferentes");
        if num1 > num2:
            print(f'{num1} {num2}');
        else:
            print(f'{num2} {num1}');
