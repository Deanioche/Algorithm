# **class 2++**

## **Silver V	 1018	체스판 다시 칠하기**

```py
import sys
input = sys.stdin.readline

N, M = map(int, input().split())
l = [input() for _ in range(N)]
w = 65
for a in range(N-7):
    for b in range(M-7):
        r = 0
        for x in range(a, a+8):
            for y in range(b, b+8):
                if l[x][y] == ('W'if x % 2 == y % 2 else'B'):
                    r += 1
        w = min(r, 64-r, w)
print(w)
```

```cpp
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, M, w = 65;
    scanf("%d %d", &N, &M);
    char l[N][M + 1];
    for (int a = 0; a < N; a++)
        scanf("%s", l[a]);

    for (int a = 0; a < N - 7; a++)
        for (int b = 0; b < M - 7; b++)
        {
            int r = 0;
            for (int x = a; x < a + 8; x++)
                for (int y = b; y < b + 8; y++)
                    if (l[x][y] == ((x % 2 == y % 2) ? 'W' : 'B'))
                        r++;
            int v[] = {r, 64 - r, w};
            w = *min_element(v, v + 3);
        }
    printf("%d", w);
}
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
import sys
w = sys.stdin.readline

N, K = map(int, w().split())
l = [int(w()) for _ in range(N)]

s, e = 1, max(l)

while s <= e:
    m = (s + e) // 2
    r = 0
    for i in l:
        r += i // m

    if r >= K:
        s = m + 1
    else:
        e = m - 1
print(e)
```

```cpp
#include <iostream>
#include <algorithm>

using namespace std;

void fast_io(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

int main(int argc, char const *argv[])
{
    long long N, K;

    cin >> N >> K;

    long long arr[N];
    long long ll[N];
    for (int i = 0; i < N; i++){
        long long tmp;
        cin >> tmp;
        arr[i] = tmp;
        ll[i] = tmp;
    }

    long long start = 1, *end = max_element(arr, arr + N);

        while (start <= *end)
    {
        long long mid = (start + *end) / 2;
        long long r = 0;
        for(long long i : ll )
            r += i / mid;
        
        if (r >= K)
            start = mid + 1;
        else
            *end = mid - 1;
    }

    cout << *end;
    return 0;
}
```

```js
let w = require('fs').readFileSync(__dirname + '/dev/stdin').toString().split('\n');

const [K, N] = w.shift().split(" ").map(Number);
const l = w.map(Number);
let [s, e] = [1, Math.max(...l)]

while (s <= e) {
    let mid = parseInt((s + e) / 2)
    let r = 0;

    for (i of l)
        r += parseInt(i / mid);
    if (r >= N)
        s = mid + 1;
    else
        e = mid - 1;
}
console.log(e)

```

___

## **Silver III	 1874	스택 수열**

- 4까지 push * 4
```
[0, 1, 2, 3, 4]
['+', '+', '+', '+']
i = 5
```
- 4, 3 pop * 2
```
[0, 1, 2]
['+', '+', '+', '+', '-', '-']
i = 5
```
- 6까지 push * 2
```
[0, 1, 2, 5, 6]
['+', '+', '+', '+', '-', '-', '+', '+']
i = 7
```
- 6 pop * 1
```
[0, 1, 2, 5]
['+', '+', '+', '+', '-', '-', '+', '+', '-']
i = 7
```
- 8까지 push * 2
```
[0, 1, 2, 5, 7, 8]
['+', '+', '+', '+', '-', '-', '+', '+', '-', '+', '+']
i = 9
```
- 8, 7 pop * 2
```
[0, 1, 2, 5]
['+', '+', '+', '+', '-', '-', '+', '+', '-', '+', '+', '-', '-']
i = 9
```
- 5 pop * 1
```
[0, 1, 2]
['+', '+', '+', '+', '-', '-', '+', '+', '-', '+', '+', '-', '-', '-']
i = 9
```
- 2 pop * 1
```
[0, 1]
['+', '+', '+', '+', '-', '-', '+', '+', '-', '+', '+', '-', '-', '-', '-']
i = 9
```
- 1 pop * 1
```
[0]
['+', '+', '+', '+', '-', '-', '+', '+', '-', '+', '+', '-', '-', '-', '-', '-']
i = 9
```
```py
import sys
w = sys.stdin.readline
l = []
r = []
i = 1
s = False
for _ in range(int(w())):
    n = int(w())
    while i <= n:
        l.append(i)
        r += '+'
        i += 1
    if l[-1] == n:
        r += '-'
        l.pop()
    else:
        s = True

if s:
    print("NO")
else:
    print(*(_ for _ in r), sep="\n")
```

```py
import sys
w = sys.stdin.readline
i, l, r = 0, [], []
for _ in range(int(w())):
    n = int(w())
    if l and l[-1] > n:
        print('NO')
        exit()
    while not l or l[-1] < n:
        i += 1
        l += [i]
        r += '+'
    l.pop()
    r += '-'
print('\n'.join(r))
```

```cpp
```

```js
```

___

## **Silver IV	 1920	수 찾기**

https://chancoding.tistory.com/44

```py
import sys
w = sys.stdin.readline

def BS(arr, start, end, target):
    if start == (end-1):
        if target == arr[start] or target == arr[end]:
            return 1
        else:
            return 0
    mid = (start + end)//2
    if arr[mid] > target:
        return BS(arr, start, mid, target)
    elif arr[mid] < target:
        return BS(arr, mid, end, target)
    else:
        return 1

N = int(w())
n = sorted(map(int, w().split()))
M = int(w())
m = map(int, w().split())

for i in m:
    print(BS(n, 0, N-1, i))
```

```py
import sys
w = sys.stdin.readline

def BS(arr, start, end, target):
    if start > end:
        return 0
    mid = (start+end)//2
    if target == arr[mid]:
        return 1
    elif target < arr[mid]:
        return BS(arr, start, mid-1, target)
    else:
        return BS(arr, mid+1, end, target)

N = int(w())
n = sorted(map(int, w().split()))
M = int(w())
m = map(int, w().split())

for i in m:
    print(BS(n, 0, N-1, i))
```

```cpp
#include <bits/stdc++.h>
using namespace std;

int n[100001], m[100001];

void fast_io()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}

int BS(int arr[], int start, int end, int target)
{
    if (start > end)
        return 0;
    int mid = (start + end) / 2;
    if (target == arr[mid])
        return 1;
    else if (target < arr[mid])
        return BS(arr, start, mid - 1, target);
    else
        return BS(arr, mid + 1, end, target);
}

int main()
{
    int N, M, i;
    fast_io();
    cin >> N;
    for (i = 0; i < N; i++)
        cin >> n[i];
    sort(n, n + N);
    cin >> M;
    for (i = 0; i < M; i++)
        cin >> m[i];
    for (i = 0; i < M; i++)
        cout << BS(n, 0, N - 1, m[i]) << "\n";
}
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
import sys
n = int(sys.stdin.readline())

l = [i for i in range(1, n + 1)]

while (len(l) != 1):
    if len(l) % 2:
        l = [l[-1]] + l[1::2]
    else:
        l = l[1::2]

print(l[0])
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
import math

a, b = map(int, input().split())

print(math.gcd(a, b))
print(math.lcm(a, b))
```

```py
import sys
input = sys.stdin.readline
a, b = map(int, input().split())

def gcd(a, b):
    while b > 0:
        a, b = b, a % b
    return a

def lcm(a, b):
    return a * b // gcd(a, b)

print(gcd(a, b))
print(lcm(a, b))
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
from itertools import combinations as c
n, t = map(int, input().split())
l = map(int, input().split())
print(max(i for i in map(sum, c(l, 3))if i <= t))
```

```py
n, t = map(int, input().split())
l = list(map(int, input().split()))
r = 0
for i in range(n):
    for j in range(i+1, n):
        for k in range(j+1, n):
            if l[i] + l[j] + l[k] > t:
                continue
            else:
                r = max(r, l[i]+l[j]+l[k])
print(r)
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

- 브루트포스
```py
import sys
w = sys.stdin.readline

n = int(w())
l = []
for _ in range(n):
    l += [[*map(int, w().split())]]

for i in l:
    r = 1
    for j in l:
        if i[0] < j[0] and i[1] < j[1]:
            r += 1
    print(r, end=" ")
```

```cpp
```

```js
```

___

## **Silver IV	 9012	괄호**

```py
import sys
input = sys.stdin.readline

N = int(input())
for _ in range(N):
    r = 0
    l = input().rstrip()
    for i in range(len(l)):
        if r > 0:
            break
        if l[i] == '(':
            r -= 1
        elif l[i] == ')':
            r += 1
    print("YES" if r == 0 else "NO")
```

```py
import sys
input = sys.stdin.readline

for _ in '_'*int(input()):
    s = input().strip()
    for _ in s:
        s = s.replace('()', '')
    print(['YES', 'NO'][s > ''])
```

```cpp
#include <bits/stdc++.h>

int main()
{
    int n;
    scanf("%d", &n);

    while (n--)
    {
        char s[51];
        int r = 0;
        scanf("%s", s);
        for (int i = 0; i < strlen(s); i++)
        {
            if (r > 0)
                break;
            else if (s[i] == '(')
                r--;
            else if (s[i] == ')')
                r++;
        }
        printf(r == 0 ? "YES\n" : "NO\n");
    }
}
```

```cpp
#include <bits/stdc++.h>

int main()
{
    int n, r, i;
    scanf("%d", &n);

    while (n--)
    {
        char s[51];
        scanf("%s", s);
        for (i = r = 0; s[i] && r <= 0; i++)
            r += (s[i] == '(' ? -1 : 1);
        printf(r == 0 ? "YES\n" : "NO\n");
    }
}
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
import sys
w = sys.stdin.readline

l = []
for _ in range(int(w())):
    n = int(w())
    l.pop() if n == 0 else l.append(n)
print(sum(l))

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

- **딕셔너리** 이용
- m 순서대로 출력하기.(m의 원소는 중복될 수 있음)

    ```py
    import sys
    w = sys.stdin.readline
    w()
    n = [*map(int, w().split())]
    w()
    m = [*map(int, w().split())]

    d = dict.fromkeys(n, 0)
    d.update(dict.fromkeys(m, 0))

    for i in n:
        d[i] += 1

    for i in m:
        sys.stdout.write("%d " % d[i])
    ```

- collections 모듈 **Counter 클래스** 이용
    ```py
    import sys
    from collections import Counter
    w = sys.stdin.readline
    w()
    cnt = Counter(w().split())
    w()
    print(*(f'{cnt[x]}' for x in w().split()))
    ```

```cpp
```

```js
```

___

## **Silver IV	 10828	스택**

```py
import sys
w = sys.stdin.readline

l = []
for _ in range(int(w())):
    a = w().split()
    if a[0] == "push":
        l.append(a[1])
    elif a[0] == "top":
        if len(l):
            print(l[-1])
        else:
            print(-1)
    elif a[0] == "pop":
        print(l[-1] if len(l) else -1)
        if len(l):
            l.pop()
    elif a[0] == "size":
        print(len(l))
    elif a[0] == "empty":
        print(0 if len(l) else 1)
```

```cpp
```

```js
```

___

## **Silver IV	 10845	큐**


```py
import sys
input = sys.stdin.readline
l = []
for _ in range(int(input())):
    i = input().split()
    if i[0] == "push":
        l += [i[1]]
        # print(i[1])
    elif i[0] == "front":
        print(l[0] if len(l) else -1)
    elif i[0] == "back":
        print(l[-1] if len(l) else -1)
    elif i[0] == "size":
        print(len(l))
    elif i[0] == "empty":
        print(0 if len(l) else 1)
    elif i[0] == "pop":
        print(l.pop(0) if len(l) else -1)
```

```cpp
```

```js
```

___

## **Silver IV	 10866	덱**

```py
import sys
w = sys.stdin.readline

l = []
for _ in range(int(w())):
    a = w().split()
    if a[0] == "push_front":
        l = [a[1]] + l
    if a[0] == "push_back":
        l.append(a[1])
    elif a[0] == "front":
        if len(l):
            print(l[0])
        else:
            print(-1)
    elif a[0] == "back":
        if len(l):
            print(l[-1])
        else:
            print(-1)
    elif a[0] == "pop_front":
        print(l[0] if len(l) else -1)
        if len(l):
            l.pop(0)
    elif a[0] == "pop_back":
        print(l[-1] if len(l) else -1)
        if len(l):
            l.pop()
    elif a[0] == "size":
        print(len(l))
    elif a[0] == "empty":
        print(0 if len(l) else 1)
```

```py
n,*l=open(0);a,p=[],print
for i in l:
if"h_f"in(q:=(j:=i.split())[0]):a=[j[1]]+a
elif"h_b"in q:a+=[j[1]]
elif"p_f"in q:p(a.pop(0)if a else-1)
elif"p_b"in q:p(a.pop()if a else-1)
elif"i"in q:p(len(a))
elif"m"in q:p(+(len(a)<1))
elif"r"in q:p(a[0]if a else-1)
else:p(a[len(a)-1]if a else-1)
```

```cpp
```

```js
```

___

## **Silver V	 10989	수 정렬하기 3 STANDARD**

```py
import sys
input = sys.stdin.readline
print = sys.stdout.write

n = int(input())
l = [0] * 10001

for i in range(n):
    l[int(input())] += 1

for i in range(10001):
    for j in range(l[i]):
        print("%s\n" % i)
```

```cpp
```

```js
```

___

## **Bronze I	 11050	이항 계수 1**

[ref](https://shoark7.github.io/programming/algorithm/3-ways-to-get-binomial-coefficients)
```py
def f(n):
    r = 1
    for i in range(2, n+1):
        r *= i
    return r

a, b = map(int, input().split())
print(f(a) // f(b) // f(a-b))
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

**# 덱 사용** 31864 kb 132 ms
```py
from collections import deque as d
import sys
input = sys.stdin.readline
print = sys.stdout.write

q = d()
r = []
n, k = map(int, input().split())

for i in range(1, n+1):
    q.append(i)

while q:
    for i in range(k-1):
        q.append(q.popleft())
    r.append(q.popleft())

print("<")
for i in range(len(r)-1):
    print("%d, " % r[i])
print("%s" % r[-1])
print(">")
```
29200 kb 68 ms
```py
n, k = map(int, input().split())
q = [i for i in range(1, n+1)]
i = 0

print("<", end='')
while len(q) > 1:
    i = i+k
    if i > len(q):
        i = i % len(q)
        if i == 0:
            i = i + len(q)
    i = i-1
    print(str(q.pop(i)), end=", ")

print("{}>".format(str(q.pop())))
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
