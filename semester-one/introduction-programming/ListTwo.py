def turno(status):

    status_dict = {
        "M": 'Bom Dia!',
        "V": 'Boa Tarde!',
        "N": 'Boa Noite!',
    }

    default_status = 'Valor Invalido'

    return status_dict.get(status, default_status)

exer = int(input("Lista de Exercicios Python 1.1\nDigite o Numero do Exercicio: "))

match exer:
    case 1:
        resp = input("qual é a seu Turno: ")
        print(turno(resp))
    case 2:
        salario = int(input("Digite seu salario: "))
        porcem = [0.20, 0.15, 0.10, 0.5]
        if salario <= 280:
            i = 0
            adicional = salario * porcem[0]
            salario_ajuste = salario + adicional
        elif salario > 280 and salario < 700:
            i = 1
            adicional = salario * porcem[1]
            salario_ajuste = salario + adicional
        elif salario > 700 and salario < 1500:
            i = 2
            adicional = salario * porcem[2]
            salario_ajuste = salario + adicional
        elif salario > 1500:
            i = 3
            adicional = salario * porcem[3]
            salario_ajuste = salario + adicional
        print(f'salario: {salario},Porcentagem: {porcem[i]},adicional: {adicional}, Salario com reajuste: {salario_ajuste}')
    case 3:
        

    case _:
        print("Valor Invalido")