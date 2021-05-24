import math
r = list(map(int , input().split()))
G = r[0]
p = r[1]
pep = r[2:]
sum1 = sum(pep[G:])
sum2 = int(float((sum1/p)+1))
sum3 = int(math.ceil((sum1+int(pep[G-1]))/p))
print(sum2 , sum3 , sep = " ")