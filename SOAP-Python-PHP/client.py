from SOAPpy import SOAPProxy

server = SOAPProxy('http://localhost:8080/server.php')
print '2 + 5 = ' + str(server.somar(2, 5))
print '2 - 5 = ' + str(server.subtrair(2, 5))
print '2 * 5 = ' + str(server.multiplicar(2, 5))
print '2 / 5 = ' + str(server.dividir(2, 5))
