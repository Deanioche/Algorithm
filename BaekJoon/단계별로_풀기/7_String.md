# **단계별로 풀기 - 7. String**

## **11654 아스키 코드**

```py
a = input()
print(ord(a))
```

```js
const input = require("fs").readFileSync("/dev/stdin").toString();

console.log(input.charCodeAt());
```

```c
#include <stdio.h>

int main()
{
    char a;
    scanf("%c", &a);
    printf("%d", a);
    return 0;
}
```

```java
public class Main {
    public static void main(String[] args) throws Exception {
        System.out.print(System.in.read());
    }
}
```

___

## **11720 숫자의 합**

```py
import sys
input = sys.stdin.readline

i = int(input())
n = input()
lst = []

while i:
    lst.append(int(n[i-1]))
    i -= 1

print(sum(lst))
```

```py
input()
print(sum(map(int, input().rstrip())))
```

```js
let input = require('fs').readFileSync(__dirname + '/dev/stdin').toString().trim().split('\n');

console.log(input[1].split("").reduce((a, b) => +a + +b));
```

```java
```

___

## **10809 알파벳 찾기**

```py
s = input().rstrip()
l = [-1] * 26

for i in s:
    l[ord(i) - 97] = s.index(i)

for i in l:
    print(i, end=" ")
```

```js
let input = require('fs').readFileSync(__dirname + '/dev/stdin').toString().trim().split('\n');

s = input[0]
let l = Array(26).fill(-1)
for (i in s) {
    let d = s[i].charCodeAt() - 97
    if (l[d] == -1)
        l[d] = i
}
for (n of l)
    process.stdout.write(n + " ")
```

```java
```

___

## **2675 문자열 반복**

```py
for _ in range(int(input())):
    n, s = input().split()
    a = ''
    for i in s:
        a += i * int(n)
    print(a)
```

```js
let i = require('fs').readFileSync(__dirname + '/dev/stdin').toString().split('\n');

let n = 1
while (n <= +i[0]) {
    let s = i[n++].trim().split(" ")
    r = ''
    s[1].split("").map(v => r += Array(+s[0] + 1).join(v))
    console.log(r)
}
```

```java
```
___

## **10809 알파벳 찾기**

```py
```

```js
```

```java
```