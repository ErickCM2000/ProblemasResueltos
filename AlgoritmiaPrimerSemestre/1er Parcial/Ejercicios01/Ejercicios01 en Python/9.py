n=0
reprobados=0
aprobados=0
suma=0
i=0

while n>=0 and n<=10:
	n=float(input(''))
	
	if n>=6:
		aprobados+=1
		suma+=n
		i+=1

	if n<6 and n>=0:
		reprobados+=1
		suma+=n
		i+=1


print(suma/i)
print(aprobados)
print(reprobados)



		