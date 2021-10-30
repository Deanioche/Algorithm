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
public class Test {
    long sum(int[] a) {
        long ans = 0;
        int i = 0;
        while (i < a.length)
            ans += a[i++];
        return ans;
    }
}

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
let n = [...Array(10000)].map((v, i) => i + 1); // 1 ~ 10000
let s = new Set(); // 중복을 제거한 셀프 넘버가 아닌 수의 집합

let i = 1
while (i < 10001) {
    m = i;                  // 현재 수
    for (w of `${i++}`)     // 자리수 별로 나눠 하나씩 더하기
        m += +w;
    s.add(m)                // 셀프 넘버가 아닌 집합에 저장
}

n.forEach((v, i) => { if (!s.has(v)) console.log(v); })
// 1 ~ 10000 배열에서 셀프 넘버의 집합에 존재하는 수를 제외하고 출력
```

```java
```

___

## **1065 한수**

    한자리 수 == 한수
    두자리 수 == 공차가 정해진 등차수열 == 한수
    1~99까지의 한수 = 99 개
    세자리 수 == 공차 계산 [r-1, r, r+1] -> r * 2 = (r-1) + (r+1)

```py
def cal(n):
    if int(n[1]) * 2 == int(n[0]) + int(n[2]):
        return 1
    return 0

n = int(input())
if n < 100:
    print(n)
else:
    r = 99
    for i in range(111, n + 1):
        r += cal(str(i))
    print(r)
```

```js
let input = require('fs').readFileSync(__dirname + '/dev/stdin').toString().trim().split('\n');
let n = +input[0];
if (n < 100) console.log(n)
else {
    let m = 99
    while (111 <= n) {
        s = `${n--}`
        if ((+s[1]) * 2 == (+s[0]) + (+s[2])) m++;
    }
    console.log(m)
}
```

```java

```