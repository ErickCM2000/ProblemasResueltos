def serie(n):
	if n==0:
		return 0
	elif n==1:
		return 2
	else:
		return (serie(n-1)+2)

n=int(input(' '))
for i in range(n):
	print(serie(i))

