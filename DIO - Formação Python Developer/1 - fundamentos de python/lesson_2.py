'''

## Tipos de dados

texto:      - str
númerico:   - int, float, complex
sequencia:  - list, tuple, range
mapa:       - dict
coleção:    - set, fronzenset
booleano:   - bool
binário:    - bytes, bytearray, memoryview


## Modo interativo

python || flag -i
python -i app.py
exit(): fecha o modo interativo
dir(): retorna uma lista de atributos válidos para o objeto
help(): retorna todas as informações do objeto de interesse

## Variáveis e constantes

variaveis: podem sofrer alterações durante o código
constantes: permanece o valor durante todo código,
não existe algo reservado para constantes em python,
- o padrão de nomes deve ser snake case
- escolher nomes sugestivos
- nome de constantes todo em maiusculo

## Conversão de tipos (casting)

str(1.2345) -> "1.2345"
float("1.2345") -> 1.2345

## Funções de entrada e saída

receber e informar ao usuario
input - ler dados da entrada padrão (teclado); retorna uma string
end -> final da string
sep -> separador da string


'''

def func(item):
    print(item, type(item))

func("Hello")
func(10)
func(1.2345)
func([1,2,3])
func({1,2,3})
func(True)

''''''

LIMITE_DIARIO = 500

func(LIMITE_DIARIO)

''''''

print("\nCONVERSAO\n")
func(str(1.2345))
func(float("1.2345"))

''''''

print("\nFUNCOES DE ENTRADA E SAIDA\n")
name = input("Digite seu nome: ")
print("Meu nome é ", name)
print("Meu nome é ", name, end="...\t\t")
print("Meu nome é", name, sep="_")