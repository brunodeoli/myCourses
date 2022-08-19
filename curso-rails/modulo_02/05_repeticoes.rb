#WHILE

i = 0 
n = 5

while i <= n do
    puts "Contando..." + i.to_s
    i += 1
end


#EACH

(0..5).each do |item|
    puts "O valor lido foi: " + item.to_s
end