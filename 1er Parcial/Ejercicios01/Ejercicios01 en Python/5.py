a=int(input('a:'))
b=int(input('b:'))

if a<100 and b<100:
	aux1=a
	aux2=b
	mayor=0
	while aux1<=aux2:
		area=(100-2*aux1)*aux1

		if area>mayor:
			mayor=area
			a=aux1
			
		aux1=aux1+1

	print(mayor)
	print(a)

		
	