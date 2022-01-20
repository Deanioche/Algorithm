import sys

w = sys.stdin.readline
p = sys.stdout.write

for _ in range(int(w())):
    l = w().rstrip().split(" ")
    p(f"Case #{_ + 1}: {' '.join(l[::-1])}\n")