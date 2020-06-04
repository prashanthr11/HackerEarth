s = int(input())
a = list(map(int,input().split()))
x = list()
for i in a:
    if i >= 0:
        x.append(i)
 
if sum(x):
    print(sum(x), end = ' ' + str(len(x)))
else:
    print(max(a), end = ' ' + "1")
