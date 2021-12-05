# **class 2++**

## **Silver V	 1018	체스판 다시 칠하기**

```py
```

```cpp
```

```js
```

___

## **Bronze III	 1085	직사각형에서 탈출**

```py
x, y, w, h = map(int, input().split())
print(min(list(map(abs, [w-x, h-y, 0-x, 0-y]))))
```

```cpp
```

```js
```

___

## **Silver V	 1181	단어 정렬**

```py
import sys
input = sys.stdin.readline

n = int(input())
l = set()
while n:
    l.add(input())
    n -= 1

for _ in sorted(sorted(list(l)), key=len):
    print(_, end="")
```

```py
s = sorted # vscode에서는 입력이 끝나지 않음
print(''.join(s(s(set(open(0).readlines()[1:])), key=len)))
```

```cpp
```

```js
```

___

## **Bronze I	 1259	팰린드롬수**

```py
```

```cpp
```

```js
```

___

## **Silver V	 1436	영화감독 숌**

```py
```

```cpp
```

```js
```

___

## **Silver III	 1654	랜선 자르기**

```py
```

```cpp
```

```js
```

___

## **Silver III	 1874	스택 수열**

```py
```

```cpp
```

```js
```

___

## **Silver IV	 1920	수 찾기**

```py
```

```cpp
```

```js
```

___

## **Silver II	 1929	소수 구하기**

```py
```

```cpp
```

```js
```

___

## **Silver III	 1966	프린터 큐**

```py
```

```cpp
```

```js
```

___

## **Silver IV	 1978	소수 찾기**

```py
```

```cpp
```

```js
```

___

## **Silver IV	 2108	통계학**

```py
```

```cpp
```

```js
```

___

## **Silver IV	 2164	카드2**

```py
```

```cpp
```

```js
```

___

## **Bronze II	 2231	분해합**

```py
n = input()
for i in range(0, int(n)):
    i = str(i)
    if int(n) == sum([int(i), *map(int, i)]):
        print(i)
        quit()
print(0)
```

```cpp
```

```js
```

___

## **Bronze II	 2292	벌집**

```py
```

```cpp
```

```js
```

___

## **Silver V	 2609	최대공약수와 최소공배수**

```py
```

```cpp
```

```js
```

___

## **Silver V	 2751	수 정렬하기 2**

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
```cpp
#include <bits/stdc++.h>
using namespace std;
main()
{
    int n, i;
    scanf("%d", &n);
    vector<int> arr(n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    sort(arr.begin(), arr.end());
    for (i = 0; i < n; i++)
        printf("%d\n", arr[i]);

    return 0;
}
```

```js
```

___

## **Bronze II	 2775	부녀회장이 될테야**

```py
```

```cpp
```

```js
```

___

## **Bronze II	 2798	블랙잭**

```py
```

```cpp
```

```js
```

___

## **Silver III	 2805	나무 자르기**

```py
```

```cpp
```

```js
```

___

## **Bronze I	 2839	설탕 배달**

```py
```

```cpp
```

```js
```

___

## **Bronze I	 2869	달팽이는 올라가고 싶다**

달팽이의 움직임을 계산하는 문제

```py
u, d, g = map(int, input().split())
t = (g-d)//(u-d)
if(g-d) % (u-d):
    t += 1
print(t)
```

```py
u, d, g = map(int, input().split())
print(1-(g-u)//(d-u))
```

```cpp
```

```js
```

___

## **Bronze III	 4153	직각삼각형**

```py
import sys
input = sys.stdin.readline
while 1:
    l = sorted([*map(int, input().split())])
    if l[0] == 0:
        quit()
    print("right" if l[0] * l[0] + l[1] * l[1] == l[2] * l[2] else "wrong")
```

```cpp
```

```js
```

___

## **Silver IV	 4949	균형잡힌 세상**

```py
```

```cpp
```

```js
```

___

## **Silver V	 7568	덩치**

```py
```

```cpp
```

```js
```

___

## **Silver IV	 9012	괄호**

```py
```

```cpp
```

```js
```

___

## **Bronze III	 10250	ACM 호텔**

```py
```

```cpp
```

```js
```

___

## **Silver IV	 10773	제로**

```py
```

```cpp
```

```js
```

___

## **Silver V	 10814	나이순 정렬**

```py
```

```cpp
```

```js
```

___

## **Silver IV	 10816	숫자 카드 2**

```py
```

```cpp
```

```js
```

___

## **Silver IV	 10828	스택**

```py
```

```cpp
```

```js
```

___

## **Silver IV	 10845	큐**

```py
```

```cpp
```

```js
```

___

## **Silver IV	 10866	덱**

```py
```

```cpp
```

```js
```

___

## **Silver V	 10989	수 정렬하기 3 STANDARD**

```py
```

```cpp
```

```js
```

___

## **Bronze I	 11050	이항 계수 1**

```py
```

```cpp
```

```js
```

___

## **Silver V	 11650	좌표 정렬하기 STANDARD**

```py
import sys
input = sys.stdin.readline
n = int(input())
l = []
for _ in range(n):
    a, b = map(int, input().split())
    l.append([a, b])

for i in sorted(l):
    print(i[0], i[1])
```

```py
for i in sorted([[*map(int, s.split())]for s in open(0)][1:]):
    print(*i)
```

```cpp
#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    scanf("%d", &n);
    vector<pair<int, int>> v;

    for (int i = 0; i < n; i++)
    {
        int x, y;
        scanf("%d %d", &x, &y);
        v.push_back(make_pair(x, y));
    }
    sort(v.begin(), v.end());

    for (int i = 0; i < n; i++)
        printf("%d %d\n", v[i].first, v[i].second);
}
```

```cpp
#include <bits/stdc++.h>
using namespace std;
int n, a, b;
set<pair<int, int>> s;
main()
{
    for (cin >> n; n--; s.insert({a, b}))
        scanf("%d %d", &a, &b);
    for (auto i : s)
        printf("%d %d\n", i.first, i.second);
```

___

## **Silver V	 11651	좌표 정렬하기 2**

```py
```

```cpp
```

```js
```

___

## **Silver IV	 11866	요세푸스 문제 0**

```py
```

```cpp
```

```js
```

___

## **Bronze II	 15829	Hashing**

```py
input()
a = input().rstrip()
n = 0
for i, _ in enumerate(a):
    n += (ord(_) - 96) * 31 ** i
print(n % 1234567891)
```
- 1234567891로 나머지연산을 하지 않으면 50점

```cpp
```

```js
```

___

## **Silver III	 18111	마인크래프트**

```py
```

```cpp
```

```js
```

___
