for t in range(int(input())):
	l = input().split()
	N, K = int(l[0]), int(l[1])

	digits = str(input())

	res, prev = 1, 0
	for i in range(K):
		res *= int(digits[i])

	prev = res
	for i in range(K, N):
		m = 1
		if digits[i - K] == '0':
			for j in range(i - K + 1, i + 1):
				m *= int(digits[j])
		else:
			m = prev / int(digits[i - K]) * int(digits[i])
		prev = m
		res = max(res, prev)
	print(int(res))

