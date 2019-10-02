import Pyro4

@Pyro4.expose
class servidor:
	def soma(self,a,b):
	    return a+b
	def subtracao(self,a,b):
	    return a-b
	def multiplicacao(self,a,b):
	    return a*b
	def divisao(self,a,b):
	    return a/b

daemon = Pyro4.Daemon()
uri = daemon.register(servidor)
ns = Pyro4.locateNS()
ns.register('obj', uri)
print("uri = ", uri)
daemon.requestLoop()
