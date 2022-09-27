'''
## MÉTODOS ÚTEIS STRING

upper() - Converte para maiusculo
lower() - Converte para minusculo
title() - Primeira letra maiuscula de cada palavra
strip() - exclui espaços extras da string
lstrip() - exclui espaços da esquerda
rstrip() - exclui espaços da direita
center() - texto centralizado
join() - separa cada caracter com um caracter especificado


## INTERPOLAÇÃO DE VARIÁVEIS

% - Não recomendado. Complexo. Ordenado.
Exemplo: print("Olá, me chamo %s" % nome)
format - Complexo porém há disponibilidade para ordernar.
Exemplo: print("Olá, me chamo {}".format(nome))
fstrings - Mais visual
Exemplo: print(f"Olá, me chamo {nome}, minha altura é {altura:.2f} m")

## FATIAMENTO DE STRING

name[::-1] -> string inversa
name[10:16:2] -> var[start:end:skip]

## STRING MÚLTIPLAS LINHAS

Ideal para fazer menus
Exemplo:
print("""blablabla
    blablabla
        blablabla""")

'''

print("""blablabla
    blablabla
        blablabla""")

print('''blablabla
    blablabla
        blablabla''')