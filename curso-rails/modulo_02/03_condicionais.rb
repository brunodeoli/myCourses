#RELACIONAIS e ARITMETICOS:
# > | >= | < | <= | == | !=
# + | -  | * | /  | ** | %

#IF
print "Digite um número: "
x = gets.chomp.to_i

puts 'CONDICIONAL IF'
if x > 2
    puts 'x é maior que 2'
else 
    puts 'x é menor que 2'
end

#UNLESS / a menos que
puts 'CONDICIONAL UNLESS'
unless x >= 2
    puts 'x é menor que 2'
else 
    puts 'x é maior que 2'
end

#CASE
puts 'CONDICIONAL CASE'
case x
when 0..2
    puts 'x está entre 0 e 2'
when 3..6
    puts 'x está entre 3 e 6'
when 7..10
    puts 'x está entre 7 e 10'
else
    puts 'x é maior que 10'
end

#TERNARIA
puts 'CONDICIONAL TERNARIA'
x>=2? (puts 'x é maior ou igual 2') : (puts 'x é menor que 2')
puts (x>=2?  'x é maior ou igual 2' : 'x é menor que 2')