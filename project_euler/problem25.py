fibList = [1 , 2]
f1, f2 = 1, 1
while len(str(f2)) <= 5000:
		f = f1 + f2
		f1 = f2
		f2 = f
		fibList.append(f2)


for t in range(int(input())):
	n = int(input())
	
	left, right = 0, len(fibList) - 1
	res = -1
	while left <= right:
		mid = int((left + right) / 2)
		l = len(str(fibList[mid]))
		if l == n:
			res = mid + 1
			break
		if l >= n:
			right = mid - 1
		else:
			left = mid + 1
	while res > 0 and len(str(fibList[res])) == len(str(fibList[res - 1])):
		res -= 1
	print(res + 1)
	