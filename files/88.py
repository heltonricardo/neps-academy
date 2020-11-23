e = input().split()
if e.count('1') == 1:
   print(chr(e.index('1')+65))
elif e.count('0') == 1:
   print(chr(e.index('0')+65))
else: print('*')
