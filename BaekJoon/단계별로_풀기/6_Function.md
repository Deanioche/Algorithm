# **단계별로 풀기 - 6. Function**

## **15596 정수 N개의 합**

```py
def solve(a):
    return sum(a)
```

```c
long long sum(int *a, int n)
{
    long long ans = 0;
    while (n--)
        ans += a[n];
    return ans;
}
```

```java

```

___

## **4673 셀프 넘버**

```py
n = set(range(1, 10001))
s = set()

for i in range(1, 10001):
    for j in str(i):
        i += int(j)
    s.add(i)

sn = sorted(n - s)
for i in sn:
    print(i)
```

```js
```

```java
```

___

## **1065 한수**

```py

```

```js
```

```java

```