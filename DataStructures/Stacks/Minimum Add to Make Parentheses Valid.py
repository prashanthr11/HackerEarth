s = map(str, input())
l = list()
cnt = 0
for i in s:
    if i == "(":
        l.append(i)
    elif len(l):
        l.pop()
    else:
        cnt += 1
if len(l):
    cnt += len(l)

print(cnt)
