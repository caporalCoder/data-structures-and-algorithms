result = []


def primeFactors(N):
	cpt = 0
	while N % 2 == 0:
		cpt += 1
		N /= 2

	if cpt > 0 :
		result.append((2, cpt))

	cpt = 0

	while N % 3 == 0:
		cpt += 1
		N /= 3

	if cpt > 0 :
		result.append((3, cpt))

	i = 5
	w = 2
	while i * i <= N:
		cpt = 0
		while N % i == 0:
			cpt += 1
			N /= i

		if cpt > 0 :
			result.append((i, cpt))
		i += w
		w = 6 - w
		
	if N > 2:
		result.append((N, 1))



for i in range(int(input())):
	N, phi = input().split()
	N, phi = int(N), int(phi)

	primeFactors(N)

	print(len(result))
	for a in result:
		print("{} {}".format(int(a[0]),int(a[1])))
	result = []