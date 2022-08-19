#CONCATENAÇÃO

## + gera um novo objeto

s1 = "hello "
s2 = "world"
s3 = ""
print s3 + " " + s3.object_id.to_s + "\n"
print (s3 = s1+s2) + " " + s3.object_id.to_s + "\n"

## << aplica sobre o objeto

s1 = "hello "
s2 = "world"
s3 = ""
print s3 + " " + s3.object_id.to_s + "\n"
print (s3 << s1+s2) + " " + s3.object_id.to_s + "\n"


#INTERPOLAÇÃO 

## #{} interpola na string que usa aspas duplas ""

print "hello #{s2}\n"
print "#{s1}#{s2}\n"