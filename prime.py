def isprime(i):
  if i == 1:
    raise Exception("I don't know!")


  import math
  for j in range(2,int(math.floor(math.sqrt(i)))):
    if i % j == 0:
      return False
  return True

for i in range(2,100):
  if isprime(i):
    print i