for t in range(int(input())):
	n = int(input())
	n = 1 << n
	sod = 0
	while n > 0:
		sod += n % 10
		n //= 10
	print(sod)
