# **Sort**

## **1	2750	 수 정렬하기**
시간 복잡도가 O(n²)인 정렬 알고리즘으로 풀 수 있습니다. 예를 들면 삽입 정렬, 거품 정렬 등이 있습니다.

```py
```

```c
```

```js
```
___

## **2	2751	 수 정렬하기 2**
시간 복잡도가 O(nlogn)인 정렬 알고리즘으로 풀 수 있습니다. 예를 들면 병합 정렬, 힙 정렬 등이 있지만, 

```py
import sys
input = sys.stdin.readline

n = int(input())
l = []
while n:
    n -= 1
    l.append(int(input()))

for i in sorted(l):
    print(i)
```

```cpp
#include <bits/stdc++.h>
using namespace std;
int main()
{
    set<int> s;
    int n, f;
    scanf("%d", &n);
    for (n; n--; s.insert(f))
        scanf("%d", &f);
    for (auto i : s)
        printf("%d\n", i);
}
```

```js
```
___

## **3	10989	 수 정렬하기 3**
수의 범위가 작다면 카운팅 정렬을 사용하여 더욱 빠르게 정렬할 수 있습니다.

```py
```

```c
```

```js
```
___

## **4	2108	 통계학	**
정렬을 활용하는 문제

```py
```

```c
```

```js
```

## **5	1427	 소트인사이드

```py
print(''.join(sorted([i for i in input()], reverse=1)))
```

```c
#include <stdio.h>

int main(void)
{
    long long int n;
    int a[10] = {0};
    scanf("%llu", &n);
    n *= 10;
    while (n /= 10)
        a[n % 10]++;
    for (int i = 9; i >= 0; i--)
        while (a[i]--)
            printf("%d", i);
}
```

```js
```
___
이드**
숫자를 정렬하는 문제
## **6	11650	 좌표 정렬하기**

```py
```

```c
```

```js
```
___
*
좌표를 정렬하는 문제
## **7	11651	 좌표 정렬하기 2

```py
import sys
input = sys.stdin.readline

n = int(input())
l = []
for _ in range(n):
    a, b = map(int, input().split())
    l.append([b, a])

l.sort()
for i in l:
    print(i[1], i[0])
```

```c
```

```js
```
___
**
좌표를 다른 순서로 정렬하는 문제
## **8	1181	 단어 정렬**

```py
```

```c
```

```js
```
___

단어의 순서를 정의하여 정렬하는 문제
## **9	10814	 나이순 정렬

```py
```

```c
```

```js
```
___
**
값이 같은 원소의 전후관계가 바뀌지 않는 정렬 알고리즘을 안정 정렬(stable sort)이라고 합니다.

```py
```

```c
```

```js
```
___

## **10	18870	 좌표 압축**
만약 정확한 값이 필요 없고 값의 대소 관계만 필요하다면, 모든 수를 0 이상 N 미만의 수로 바꿀 수 

```py
```

```c
```

```js
```
___
있습니다.