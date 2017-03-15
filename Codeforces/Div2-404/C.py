s = raw_input()
n,m = [int(i) for i in s.split(' ')]
if n<=m:
	print n
else:
	temp = 2*(n-m)+m*(m+1)
	mid=0
	ans=0
	hi=100000000000000000000000000000000000000000000000
	lo=0
	while hi>=lo:
		mid = (hi+lo)/2
		tt = (mid+m)*(mid+m+1)-2*m*mid
		if tt>=temp:
			ans = mid
			hi = mid-1
		else:
			lo = mid+1
	print ans+m