for t in range(int(input())):
	n = int(intput())
	n = 2 << n
	sod = 0
	while n > 0:
		sod += n % 10
		n /= 10
	print(sod)
