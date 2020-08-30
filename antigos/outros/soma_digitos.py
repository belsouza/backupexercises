
n = int(input("Digite um número inteiro: "))
i = 10
oresto = 0
soma = 0
temp = 0
ant = 0

while (n != oresto):

    oresto = n % i    
    temp = ( (oresto - ant) * 10 ) // i	
    soma = soma + temp	    
    i = i * 10
    ant = oresto		

print(soma)
