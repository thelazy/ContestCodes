while 1:
	try:
		n = int(raw_input())
		x=0
		for i in range(1024):
			x = x+1
		if n==1:
			print n
		else:
			print (2*(n-1))
	except:
		break