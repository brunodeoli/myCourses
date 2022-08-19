#HASHES
print('Digite seu nome: ')
nome = gets.chomp
print('Digite seu sobrenome: ')
snome = gets.chomp
print('Digite sua idade: ')
id = gets.chomp.to_i

h = {"nome": nome, "sobrenome": snome, "idade": id}

puts h.class
puts h



