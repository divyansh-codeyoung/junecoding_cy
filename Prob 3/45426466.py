a=0
b=0
l=[int(n) for n in input().split()]
a=l[0]%l[2] 
b=l[1]%l[3]
if min(a,b)>=l[4]:
    print("Yes")
print("No")