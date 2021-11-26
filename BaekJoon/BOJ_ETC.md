# **ETC**

## **2839**

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

## **20300**

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

## **20299**

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
