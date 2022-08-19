puts "digite seu nome:"
a = gets.chomp
puts "seu nome é " + a
puts "\n"
puts "vc digitou " + a.inspect + " sendo do tipo " + a.class.to_s
puts "\n"
puts "\n"
puts "digite seu salario:"
b = gets.chomp.to_f

puts "seu novo salario é " + (b*1.1).to_s
puts "\n"
puts "vc digitou " + b.inspect + " sendo do tipo " + b.class.to_s