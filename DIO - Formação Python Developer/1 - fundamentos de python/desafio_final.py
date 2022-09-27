menu = """
 
 [d] Depositar
 [s] Sacar
 [e] Extrato
 [q] Sair
 
 
 => """

LIMITE_SAQUES = 3
LIMITE = 500
saldo = 0
extrato = ""
numero_saques = 0



def deposito(saldo, extrato):
    valor = float(input("\nDigite o valor a ser depositado: "))
    if(valor>=0):
        extrato = f"{extrato}\nDepósito realizado no valor de R${valor:.2f}"
        return (valor+saldo), extrato
    return saldo, extrato

def saque(saldo, extrato):
    if(saldo == 0):
        print("\nNão será possível sacar o dinheiro pelo motivo: Falta de saldo.")
    else:
        valor = float(input("\nDigite o valor a ser sacado: "))
        if(valor<=saldo and valor<=LIMITE and valor!=0):
            saldo -= valor
            extrato = f"{extrato}\nSaque realizado no valor de R${valor:.2f}"
        else:
            print("\nNão será possível sacar o dinheiro pelo motivo: ", end="")
            if(valor>LIMITE):
                print(f"Exceder o limite de valor de saque (R${LIMITE:.2f}).")
            elif(valor>saldo):
                print("Valor maior que o saldo.")
            else:
                print("Valor inválido.")
    return saldo, extrato



while True:
    operacao = input(menu)

    match operacao.lower():
        case 'd':
            saldo, extrato = deposito(saldo, extrato)
        case 's':
            if(numero_saques<LIMITE_SAQUES):
                aux = saldo
                saldo, extrato = saque(saldo, extrato)
                if(aux != saldo):
                    numero_saques += 1
            else:
                print("\nVocê já atingiu o limite diario de saques.")
                continue
        case 'e':
            print(f"\n{extrato}\n\nO saldo atual é de R${saldo:.2f}")
        case 'q':
            break
        case _:
            print("\nOperação inválida, selecione novamente a operação desejada.")