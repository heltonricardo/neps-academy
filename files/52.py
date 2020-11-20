i1, i2 = False, False
input()
a = [int(x) for x in input().split()]
for i in a:
   if i == 1: i1 = not i1
   else: i1, i2, = not i1, not i2
print(int(i1))
print(int(i2))
