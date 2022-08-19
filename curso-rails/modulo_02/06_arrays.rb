v1 = [2,4,6,8]

v1.each do |item|
    puts item
end

v2 = Array.new
v2.push(1)
v2.push(3)
v2.push(5)
v2.push(7)

v2.each do |item|
    puts item
end

v3 = [[11,12,13],[21,22,23],[31,32,33]]

v3.each do |ext|
    ext.each do |int|
        print int.to_s + " "
    end
    puts
end