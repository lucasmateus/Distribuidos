import Pyro4

#pega os dados da conexão
ns = Pyro4.locateNS()
#retorna a uri
uri = ns.lookup('obj')
#retorna os dados do proxy do uri
o = Pyro4.Proxy(uri)

print("digite os valores a e b")
a = int(input())
b = int(input())
print('uri = ', uri)
print("A soma é: ", o.soma(a,b))
print("A subtração é: ", o.subtracao(a,b))
print("A multiplicação é: ", o.multiplicacao(a,b))
print("A divisão é: ", o.divisao(a,b))

