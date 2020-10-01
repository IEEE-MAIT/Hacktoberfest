n,c = map(int, input().split())
t = list(map(int, input().split()))
ans = 0
prev = 0
for i in t:
	if i-prev<=c:
		ans += 1
	else:
		ans = 1
	prev = i
print(ans)