from collections import Counter
t = int(input())
for i in range(t):
    n = int(input())
    l = list(map(int, input().split()))
    d = Counter(l)
    l2 = list(d.values())
    l2.sort(reverse = True)
    a = l2[0]
    b = l2[-1]
    if a - b > 0:
        print(a - b)
    else:
        print('-1')
