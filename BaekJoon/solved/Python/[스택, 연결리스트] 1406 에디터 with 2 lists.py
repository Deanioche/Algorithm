import sys
w = sys.stdin.readline
p = sys.stdout.write

l = list(w().strip())
r = []
op = [w().split() for _ in range(int(w()))]
for o in op:
    if o[0] == 'L' and l:
        r.append(l.pop())
    elif o[0] == 'D' and r:
        l.append(r.pop())
    elif o[0] == 'B' and l:
        l.pop()
    elif o[0] == 'P':
        l.append(o[1])
    print(*o, ":", l, r)
p("%s" % ''.join(l + [*r[::-1]]))
