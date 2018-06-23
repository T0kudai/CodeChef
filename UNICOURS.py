t=int(input())
while(t):
	t=t-1
	n=int(input())
	preq=set()
	for _ in range(n):
		x=int(input())
		if(x==0):
			continue
		preq.add(x)
	print(n-len(preq))