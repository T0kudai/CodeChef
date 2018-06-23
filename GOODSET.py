t = int(input())
for _ in range(t):
	n=int(input())
	l=[]
	val=1
	for x in range(n):
		l.append(val)
		val=val+2
	for a in l:
	    print(a,end=' ')