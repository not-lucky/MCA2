from collections import Counter

input()
a = Counter(map(int, input().split()))

input()
b = Counter(map(int, input().split()))

out = []

for k, v in b.items():
    ans = a.get(k, 0)
    out += [k for i in range(v-ans)]
        
out.sort()
print(out)