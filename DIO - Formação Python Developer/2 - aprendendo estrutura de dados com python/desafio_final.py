import textwrap

LIMITE_SAQUES = 3
LIMITE = 500
AGENCIA = "0001"

def menu():
    menu = """
        
        [1] Depositar
        [2] Sacar
        [3] Extrato
        [4] Criar usuário
        [5] Criar conta
        [8] Consultar usuário
        [9] Mostrar contas
        [0] Sair
        
        
        => """
    return input(textwrap.dedent(menu))

def deposito(saldo, extrato, /):
    valor = float(input("\nDigite o valor a ser depositado: "))
    if(valor>0):
        saldo += valor
        extrato = f"{extrato}\nDepósito realizado no valor de R${valor:.2f}"
        print("\n✔ Depósito realizado com sucesso!")
    else:
        print("\n✖ Falha de operação! Valor de depósito é inválido")
    return saldo, extrato

def saque(*, saldo, extrato, limite, num_saques, lim_saques):
    if(num_saques>lim_saques):
        print("\n✖ Você já atingiu o limite diario de saques.")
        return saldo, extrato, num_saques

    if(saldo == 0):
        print("\n✖ Não será possível sacar o dinheiro pelo motivo: Falta de saldo.")
    else:
        valor = float(input("\nDigite o valor a ser sacado: "))
        if(valor<=saldo and valor<=limite and valor!=0):
            saldo -= valor
            extrato = f"{extrato}\nSaque realizado no valor de R${valor:.2f}"
            num_saques += 1
            print("\n✔ Saque realizado com sucesso!")
        else:
            print("\n✖ Não será possível sacar o dinheiro pelo motivo: ", end="")
            if(valor>LIMITE):
                print(f"Exceder o limite de valor de saque (R${limite:.2f}).")
            elif(valor>saldo):
                print("Valor maior que o saldo.")
            else:
                print("Valor inválido.")

    return saldo, extrato, num_saques

def exibir_extrato(saldo, /, *, extrato):
    print(f"\n{extrato}\n\nO saldo atual é de R${saldo:.2f}")
    return

def criar_usuario(usuarios):
    cpf = input("\nInforme o CPF (somente números): ")

    if(verifica_usuario(cpf, usuarios)):
        print("\n✖ Usuário já cadastrado!")
        return
    
    nome = input("Informe o nome: ")
    data_nasc = input("Informe a data de nascimento (dd/mm/aaaa): ")
    logradouro = input("Informe o logradouro da residência: ")
    nro = input("Informe o número da residência: ")
    bairro = input("Informe o bairro da residência: ")
    cidade = input("Informe a cidade da residência: ")
    estado = input("Informe o estado da residência: ")
    endereco = f"{logradouro}, {nro} - {bairro} - {cidade}/{estado}"
    usuario = dict(nome=nome, 
        data_nascimento=data_nasc,
        cpf = cpf,
        endereco = endereco
        )
    
    usuarios.append(usuario)
    print("\n✔ Usuário cadastrado com sucesso!")

def criar_conta(agencia, numero_conta, usuarios):
    cpf = input("\nInforme o CPF (somente números): ")
    usuario = verifica_usuario(cpf, usuarios)
    if(usuario):
        conta = {"Agência": agencia, "Número_Conta": numero_conta, "Usuário": usuario}
        print("\n✔ Conta cadastrada com sucesso!")
        return conta
    print("\n✖ CPF não encontrado!\nPor favor, faça o cadastro de cliente primeiro")

def verifica_usuario(cpf, usuarios):
    for usuario in usuarios:
        if(cpf in usuario.values()):            
            return usuario

def consultar_usuario(usuarios):
    cpf = input("\nInforme o CPF que deseja consultar (somente números): ")
    usuario = verifica_usuario(cpf, usuarios)
    if(usuario):
        menu_consulta = """
        Qual informação deseja consultar?
        
        [1] Nome
        [2] Data de nascimento
        [3] Endereço

        """
        consulta = input(textwrap.dedent(menu_consulta))

        match consulta:
            case "1":
                return print(f"\n{usuario.get('nome')} é o nome do usuário portador do CPF {cpf}")
            case "2":
                return print(f"\n{usuario.get('data_nascimento')} é a data de nascimento do usuário portador do CPF {cpf}")
            case "3":
                return print(f"\n{usuario.get('endereco')} é o endereço do usuário portador do CPF {cpf}")
            case _:                
                return print("\n✖ Informação não encontrada!")
    print("\n✖ CPF não encontrado!")

def mostrar_contas(contas):
    for usuario in contas:
        print(f"""
        Nome: {usuario.get("Usuário").get("nome")}
        CPF: {usuario.get("Usuário").get("cpf")}
        Agência: {usuario.get("Agência")}
        Número da conta: {usuario.get("Número_Conta")}
        """)

def main():

    saldo = 0
    extrato = ""
    numero_saques = 0
    usuarios = []
    contas = []
    
    while True:

        operacao = menu()

        match operacao.lower():
            case '1':
                saldo, extrato = deposito(saldo, extrato)
            case '2':
                saldo, extrato, numero_saques = saque(
                        saldo=saldo, 
                        extrato=extrato,
                        limite=LIMITE,
                        num_saques=numero_saques,
                        lim_saques=LIMITE_SAQUES
                )
            case '3':
                exibir_extrato(saldo, extrato=extrato)
            case '4':
                criar_usuario(usuarios)
            case '5':
                conta = criar_conta(AGENCIA, len(contas)+1, usuarios)
                if(conta):
                    contas.append(conta)
            case '8':
                consultar_usuario(usuarios)
            case '9':
                mostrar_contas(contas)
            case '0':
                break
            case _:
                print("\n✖ Operação inválida, selecione novamente a operação desejada.")

main()