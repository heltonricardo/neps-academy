s = m = 0
for i in range(int(input())):
   s += int(input())
   if not m and 1000000 <= s: m = i + 1
print(m)
