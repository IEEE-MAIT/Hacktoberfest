test = int(input())
for t in range(test):
	s = input()
	count = 0
	prev_1 = 0
	final_1 = 0
	flag = True
	for i in range(len(s)):
		if s[i] == "1":
			final_1 = i
			if flag:
				prev_1 = final_1
				flag = False
			else:
				count += (final_1-prev_1-1)
				prev_1 = final_1
	print(count)