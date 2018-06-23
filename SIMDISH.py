for _ in range(int(input())):
	list1=input().split(" ")
	list2=input().split(" ")
	print("similar" if len([a for a in list1 if a in list2])>=len(list2)/2 else "dissimilar")