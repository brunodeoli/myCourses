''' 
IMPORTANTE: As funções "input" e "print" são acessíveis nativamente em Python, onde:  
 - "input": função que permite a leitura de uma entrada do usuário. Lembre-se que, em alguns 
   casos, é necessário converter/tratar os dados de entrada; 
 - "print": função que imprime um texto enviado em seu parâmetro, a qual é essencial para a 
   impressão dos dados de saída. 
- "dict{}": dicionários possuem uma relação de chave - valor. Para cada chave haverá um valor.
'''
month = input()

''' 
TODO Faça uma relação entre as possíveis entradas e os meses (em inglês).
TODO Imprima o valor de cada chave em relação as entradas do programa.
'''

months_dict = {

  '1': 'January',
  '2': 'February',
  '3': 'MaRcH',
  '4': 'APRIL',
  '5': 'may',
  '6': 'jUnE',
  '7': 'July',
  '8': 'August',
  '9': 'September',
  '10': 'October',
  '11': 'November',
  '12': 'December'
}

if (int(month)>=1 and int(month)<=12):
    print(months_dict[month].title())