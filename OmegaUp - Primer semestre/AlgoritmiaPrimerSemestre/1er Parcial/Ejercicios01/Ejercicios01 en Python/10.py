no=0
numeros=[]
i=0
n=0

numero=int(input(''))
numeros.append(numero)

if numeros[i]!=0:

	while numeros[i]!=0:
		i+=1
		numero=int(input(''))
		numeros.append(numero)
		n+=1
	i=0
	for i in range(n):
		for j in range(2,n-1):
			if numeros[i]%j==0:
				no+=1
				break

		if no==0 and numeros[i]!=1:
			print("S")
			no=0
		else:
			print("N")
			no=0