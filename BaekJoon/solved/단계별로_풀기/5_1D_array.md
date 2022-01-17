# **단계별로 풀기 - 5. one-dimensional array**

## **10818 최소, 최대**
https://www.acmicpc.net/problem/10818
```py
# 입력
5
20 10 35 30 7
# 출력
7 35
```

```py
import sys
input = sys.stdin.readline

m = int(input())

n = list(map(int, input().split()))
print(min(n), max(n))
```

```js
let fs = require('fs');
let input = fs.readFileSync(__dirname + '/dev/stdin').toString().split('\n');

let min = 1000001;
let max = -1000001;

let lst = input[1].split(" ").map(e => Number(e)).forEach(e => {
    if (e > max) max = e;
    if (e < min) min = e;
});

console.log(min, max);
```
## **Maximum call stack size exceeded 에러**

```js
console.log(Math.min.apply(null, lst), Math.max.apply(null, lst));
console.log(Math.min(...lst), Math.max(...lst));
```

**Math.min**의 최대 스택 사이즈는 125,547 개인데  
문제의 최대 정수 개수는 1,000,000 개.

___

## **2562 최댓값**
https://www.acmicpc.net/problem/2562

```py
import sys
input = sys.stdin.readline

l = []
for i in range(9):
    l.append(int(input()))

m = max(l)
print(f"{m}\n{l.index(m) + 1}")
```

```js
let fs = require('fs');
let input = fs.readFileSync(__dirname + '/dev/stdin').toString().split('\n');

let lst = input.map(e => Number(e));
let max = Math.max(...lst);

console.log(`${max}\n${lst.indexOf(max) + 1}`);
```

```java
```
___

## **2577 숫자의 개수**

```py
import sys
input = sys.stdin.readline

a = int(input())
b = int(input())
c = int(input())
x = list(str(a * b * c))
for i in range(0, 10):
    print(x.count(f"{i}"))
```
```py
import sys
input = sys.stdin.readline

a = int(input())
b = int(input())
c = int(input())

lst = [0] * 10

ab = list(map(int, f"{a * b * c}"))

for i in range(len(ab)):
    lst[ab[i]] += 1

print("\n".join(map(str, lst)))
```

```js
let fs = require('fs');
let input = fs.readFileSync(__dirname + '/dev/stdin').toString().split('\n');

let lst = input.map(e => Number(e));

lst = `${lst[0] * lst[1] * lst[2]}`.split("");

let i = 0;
while (i < 10) {
    console.log(lst.filter(e => e == i).length)
    i++;
}
```

```java
```
___

## **3052 나머지**

```py
import sys
input = sys.stdin.readline

lst = []
for i in range(0, 10):
    n = int(input()) % 42
    if lst.count(n) == 0:
        lst.append(n)

print(len(lst))
```

```py
import sys
input = sys.stdin.readline

lst = []
for i in range(0, 10):
    lst.append(int(input()) % 42)

print(len(set(lst)))

# list -> set은 배열에서 중복값을 제거
```

```js
let fs = require('fs');
let input = fs.readFileSync(__dirname + '/dev/stdin').toString().trim().split('\n');

let lst = input.map(e => +e % 42);

console.log((new Set(lst)).size);
```

```c
#include <stdio.h>

int main(void)
{
    int c[42] = {0};
    int r = 0;
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &r);
        c[r % 42]++;
    }
    r = 0;
    for (int i = 0; i < 42; i++)
        if (c[i] != 0)
            r++;
    printf("%d", r);
}
```
___

## **1546 평균**

```py
import sys
input = sys.stdin.readline

n = int(input())
lst = list(map(int, input().split()))

m = max(lst)
lst = list(map(lambda e: e / m * 100, lst))

print(sum(lst) / n)
```

```js
let fs = require('fs');
let input = fs.readFileSync(__dirname + '/dev/stdin').toString().trim().split('\n');

let n = +input[0];
let lst = input[1].split(" ").map(e => +e);
let m = Math.max(...lst);

console.log(lst.map(e => e / m * 100).reduce((a, b) => a + b) / n);
```

```java
```
___

## **8958 OX퀴즈**

```py
import sys
input = sys.stdin.readline

n = int(input())
for _ in range(n):
    s, r, p = input(), 0, 0
    for i in range(0, len(s)):
        if s[i] == 'O':
            p += 1
            r += p
        else:
            p = 0
    print(r)
```

```js
let fs = require('fs');
let input = fs.readFileSync(__dirname + '/dev/stdin').toString().trim().split('\n');

let n = +input[0];
let i = 1;
while (i <= n) {
    let lst = input[i] + "";
    let j = 0;
    let r = 0;
    let p = 0;
    while (lst[j]) {
        if (lst[j++] === 'O') {
            p++;
            r += p;
        } else {
            p = 0;
        }
    }
    console.log(r);
    i++;
}
```

```java
```
___

## **4344 평균은 넘겠지**

```py
import sys
input = sys.stdin.readline

for _ in range(int(input())):
    s = list(map(int, input().split()))
    a = sum(s[1:]) / s[0]
    b = list(filter(lambda e: e > a, s[1:]))
    print(f"{((len(b) / s[0]) * 100):.3f}%")
```

```js
let fs = require('fs');
let input = fs.readFileSync(__dirname + '/dev/stdin').toString().trim().split('\n');

let n = +input[0];
let i = 1;
while (i <= n) {
    let l = input[i].split(" ").map(e => +e);
    let a = l.filter((e, i) => i > 0).reduce((a, b) => a + b) / l[0]
    let b = l.filter((e, i) => i > 0 && e > a).length / l[0]
    console.log((b * 100).toFixed(3) + "%");
    i++;
}
```

```java
```