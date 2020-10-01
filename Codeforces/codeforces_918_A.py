f1 = 1
f2 = 1
s = set([1])
fn = f1+f2
while(fn<=1000):
	s.add(fn)
	f1 = f2
	f2 = fn
	fn = f2+f1
n = int(input())
a = ""
for i in range(1,n+1):
	if i in s:
		a += "O"
	else:
		a+= "o"
print(a)