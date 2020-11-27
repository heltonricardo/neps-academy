p = ''
for w in input():
   if w in 'aeiou': p += w
lenp = len(p)
for i in range(lenp):
   if p[i] != p[lenp-1-i]:
      print('N')
      break
else: print('S')
