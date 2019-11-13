years=int(input(''))
for i in range(years):

	year=int(input(''))

	if year%4==0 and year%100!=0:
		print("S")
	elif year%400==0:
		print("S")
	else:
		print("N")