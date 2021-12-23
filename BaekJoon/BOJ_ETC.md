# **ETC**

___

## **10872 팩토리얼 B3**

```py
import math
import sys
w = sys.stdin.readline

print(math.factorial(int(w())))
```
___

## **[INU 코드페스티벌 2021 Open Contest] A. 데칼코마니**

```py
import sys
input = sys.stdin.readline
h, w = map(int, input().split())
for _ in range(h):
    r = input().rstrip()
    h = w//2
    a = list(r[:h])
    b = list(r[h:][::-1])
    for i in range(h):
        if b[i] != "." and a[i] == ".":
            a[i] = b[i]
    print("".join(a + a[::-1]))
```

## **23738 Ресторан**

```py
n = input()
l = [['B', 'v'], ['E', 'ye'], ['H', 'n'], [
    'P', 'r'], ['C', 's'], ['Y', 'u'], ['X', 'h']]

for v in l:
    n = n.replace(v[0], v[1])
print(n.lower())
```

## **1213 팰린드롬 만들기**
```py
n = sorted(list(input().rstrip()))

c = 0
x = ""
if len(n) == 2:
    if n[0] != n[1]:
        print("I'm Sorry Hansoo")
        quit()

i = 0
l = len(n)
while i < l:
    if n.count(n[i]) % 2:
        c += 1
        x = n[i]
        n.remove(n[i])
        l -= 1
        i -= 1
    if c > 1:
        print("I'm Sorry Hansoo")
        quit()
    i += 1

for _ in n[::2] + [x] + n[::-2]:
    print(_, end="")
```
___

## **23305 수강변경**

```py
n = int(input())
l = [0] * 1000001

for i in list(map(int, input().split())):
    l[i] += 1

c = 0
for i in list(map(int, input().split())):
    if l[i] >= 1:
        l[i] -= 1
    else:
        c += 1
print(c)
```
___

## **1259 펠린드롬수**
```py
while 1:
    l = input().rstrip()
    r = 0
    if l == "0":
        break
    m = len(l)
    n = m - 1 if m % 2 else m
    for i in range(0, n // 2):
        if l[i] != l[m - i - 1]:
            r = 1
            break
    print("no" if r else "yes")
```
___

## **2839 설탕 배달**

```cpp
#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int c = 0;
    while (n % 5 != 0)
    {
        n -= 3;
        c++;
        if (n == 0 || n % 5 == 0)
            break;
        else if (n < 3)
        {
            c = -1;
            break;
        }
    }
    if (n >= 5)
        c += (n / 5);
    printf("%d", c);
    return 0;
}
```
___

## **20300 서강근육맨**

```py
import sys
input = sys.stdin.readline

n = int(input())
l = sorted(list(map(int, input().split())))

m = -1
j = 0
if n % 2:
    j = l.pop()

s = len(l)

for i in range(s // 2):
    u = l[i] + l[s - i - 1]
    if m < u:
        m = u

print(j if j > m else m)
```

___

## **20299 3대 측정**

```cpp
#include <stdio.h>

int s[500000][3] = {
    0,
};

int main()
{
    int n, m, p, r = 0;
    scanf("%d %d %d", &n, &m, &p);

    while (n--)
    {
        int a, b, c;
        scanf("%d %d %d", &a, &b, &c);
        if (a + b + c >= m && a >= p && b >= p && c >= p)
        {
            s[r][0] = a;
            s[r][1] = b;
            s[r][2] = c;
            r++;
        }
    }

    printf("%d\n", r);
    for (int i = 0; i < r; i++)
        printf("%d %d %d ", s[i][0], s[i][1], s[i][2]);
    return 0;
}
```

___

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
