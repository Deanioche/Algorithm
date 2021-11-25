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

## **1157 단어 공부**

```py
s = input().rstrip().upper()
l = [0] * 26
for i in s:
    l[ord(i) - 65] += 1

print("?") if l.count(max(l)) > 1 else print(chr(l.index(max(l)) + 65))
```

```js
let i = require('fs').readFileSync(__dirname + '/dev/stdin').toString().split('\n');
let l = [...Array(26)].fill(0)
for (s of i[0].toUpperCase())
    l[s.charCodeAt() - 65] += 1
if (l.filter(e => e == Math.max(...l)).length > 1) console.log("?")
else console.log(String.fromCharCode(l.indexOf(Math.max(...l)) + 65))
```

```java
```

___

## **1152 단어의 개수**

```py
print(len(list(map(str, input().split()))))
```

```js
let i = require('fs').readFileSync(__dirname + '/dev/stdin').toString().split('\n');

console.log(i[0].split(" ").filter(v => v.length > 0).length)
```

```c
#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char t[1000000];
    char *t1 = t;
    scanf("%[^\n]s", t);
    int i = 0;
    int l = strlen(t) - 1;
    while (t[i] == 32)
        i++;
    while (t[l] == 32)
        l--;
    int wc = 0;
    int n = 1;

    while (*(t1++))
    {
    }

    for (i; i <= l; i++)
    {
        if (t[i] != 32 && n == 1)
        {
            wc++;
            n = 0;
        }
        else if (t[i] == 32)
            n = 1;
    }
    printf("%d", wc);
}
```

___

## **상수**

```py
print(max(map(lambda e: ''.join(reversed(e)), input().split())))
```

```js
let i = require('fs').readFileSync(__dirname + '/dev/stdin').toString().trim().split('\n');

console.log(Math.max(...i[0].split(" ").map(e => +e.split('').reverse().join(''))))
```

```java
```
___

## **5622 다이얼**

```py
n = input()
l = ['ABC', 'DEF', 'GHI', 'JKL', 'MNO', 'PQRS', 'TUV', 'WXYZ']
r = 0
for s in n:
    for i in range(len(l)):
        if s in l[i]:
            r += i + 3
print(r)
```

```js
let i = require('fs').readFileSync(__dirname + '/dev/stdin').toString().trim().split('\n');

let l = ['ABC', 'DEF', 'GHI', 'JKL', 'MNO', 'PQRS', 'TUV', 'WXYZ']
let r = 0
for (s of i[0].split(""))
    for (n in l)
        if (l[n].includes(s))
            r += +n + 3

console.log(r)
```

```java
```

___

## **2941 크로아티아 알파벳**

```py
n = input().rstrip()

l = ['c=', 'c-', 'dz=', 'd-', 'lj', 'nj', 's=', 'z=']

for s in l:
    n = n.replace(s, '_', -1)

print(len(n))
```

```js
let i = require('fs').readFileSync(__dirname + '/dev/stdin').toString().trim().split('\n');

console.log(i[0].replace(/c=|c-|dz=|d-|lj|nj|s=|z=/g, "_").length)
```

```java
String ex = "c=|c-|dz=|d-|lj|nj|s=|z=";
System.out.println("ljes=njak".replaceAll(ex, "_"));
```

___

## [**1316 그룹 단어 체커**](https://www.acmicpc.net/submit/1316/35251271)



### **반복문 사용, 76ms**
```py
c = 0
n = int(input())
for _ in range(n):
    s = list(map(str, input()))
    i = 0
    if len(set(s)) == 1:
        c += 1
    else:
        while i < len(s) - 1:
            if s[i] == s[i + 1]:
                s.remove(s[i + 1])
            else:
                i += 1
        if len(s) == len(set(s)):
            c += 1

print(c)
```

### **eval, 함수 사용, 84ms**
```py
def f():
    s = list(map(str, input()))
    i = 0
    if len(set(s)) == 1:
        return 1
    else:
        while i < len(s) - 1:
            if s[i] == s[i + 1]:
                s.remove(s[i + 1])
            else:
                i += 1
        return 1 if len(s) == len(set(s)) else 0


n = int(input())
print(sum(eval('f(),' * n)))
```

```js
```

```java
```

```c
```
