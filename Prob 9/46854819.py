N = int(input())
l = list(str(N))
a = 0
for i in range(len(l)):
    if l[i] == "4":
        a+=1
print(a)  