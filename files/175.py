def eh_primo(x):
   lim = int(x ** .5)
   if x != 2 and x % 2 == 0 or x == 1:
      return False
   for i in range(3, lim + 1, 2):
      if x % i == 0: return False
   return True

x = int(input())
if eh_primo(x):
   print('S')
else:
   print('N')
