class Pessoa
    def falar
       "Olá, pessoal!"  
    end
    
    def meu_id
        "Meu id é o #{self.object_id}"
    end
    
    attr_accessor   :nome #substitui set e get
end

p1 = Pessoa.new
puts p1.nome
puts p1.meu_id

p2 = Pessoa.new
p2.nome = "Bruno"
puts p2.nome
puts p2.meu_id