num1=int(input(''))
num2=int(input(''))
num3=int(input(''))
num4=int(input(''))
divisor=1

while divisor<=num1 and divisor<=num2 and divisor<=num3 and divisor<=num4:
	if num1%divisor==0 and num2%divisor==0 and num3%divisor==0 and num4%divisor==0:
		MCD=divisor;
	divisor+=1;

print(MCD)