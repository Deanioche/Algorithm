# **ETC**

## **6588 골드바흐의 추측**

```py
import sys
input = sys.stdin.readline

n = 1000000
a = [False, False] + [True]*(n-1)

for i in range(2, n+1):
    if a[i]:
        for j in range(2*i, n+1, i):
            a[j] = False

while True:
    n = int(input())
    if n == 0:
        break
    for i in range(n-1, 2, -2):
        if a[i] & a[n-i]:
            print(f"{n} = {n-i} + {i}")
            break
```

___

## **1009 분산처리**

```py
n = int(input())
l = []

for _ in range(n):
    a, b = map(int, input().split())
    if a % 10 == 0:
        l.append(10)
    else:
        f = 4 + b % 4  # b % 4가 0이 나올 상황을 고려해 +4
        d = str(a ** f)
        l.append(d[-1])  # 맨 마지막 문자 하나

for i in l:
    print(i)
```
[풀이](https://nerogarret.tistory.com/23)

```js
```

```java
```
___

## **2920 음계**
```py
l = list(map(int, input().split()))

n = 0
for i, v in enumerate(l):
    if i + 1 == v:
        n += 1
    elif 8 - i == v:
        n -= 1

if n == 8:
    print("ascending")
elif n == -8:
    print("descending")
else:
    print("mixed")
```

```py
l = list(map(int, input().split()))

if l == sorted(l):
    print("ascending")
elif l == sorted(l, reverse=True):
    print("descending")
else:
    print("mixed")
```
