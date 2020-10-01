def gcd(a,b):
	if b==0:
		return a	
	return gcd(b,a%b)
n,m,z = map(int, input().split())
lcm = (n*m)//gcd(n,m)
print(z//lcm)