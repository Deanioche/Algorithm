# **Basic_math**

## **1	1712	 손익분기점**
이익이 발생하는 지점을 찾는 문제

```py
a, b, c = map(int, input().split())

if c - b <= 0:
    print(-1)
else:
    print(int(a / (c - b) + 1))
```

```js
```

```java
```
___

## **2	2292	 벌집**
벌집이 형성되는 규칙에 따라 벌집의 위치를 구하는 문제

1  | 1
6  | 2  3  4  5  6  7 
12 | 8  9  10 11 12 13 14 15 16 17 18 19
18 | 20 21 22 23 24 25 26 27 28 29 30 31 32 33 34 35 36 37
...

1칸당 6개씩 추가


1,000,000,000

```py
n = int(input()) - 1
c = 1
while n > 0:
    n -= 6 * c
    c += 1

print(c)
```

```js
```

```cpp
#include <iostream>
int main()
{
    int i, c = 1;
    std::cin >> i;
    while (i > 0)
        i -= 6 * c++;
    std::cout << c;

    return 0;
} 
```
___

## **3	1193	 분수찾기**
분수의 순서에서 규칙을 찾는 문제

1 | 1/1
2 | 1/2 2/1
3 | 3/1 2/2 1/3
4 | 1/4 2/3 3/2 4/1
5 | 5/1 4/2 3/3 2/4 1/5
6 | 1/6 2/5 3/4 4/3 5/2 6/1

홀수 x / y
짝수 y / x

```py
import sys
n = int(sys.stdin.readline())
c = 1
while n > c:
    n -= c
    c += 1
print(f"{c-n+1}/{n}") if c % 2 else print(f"{n}/{c-n+1}")
```

```js
```

```java
```
___

## **4	2869	 달팽이는 올라가고 싶다**
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

```js
```

```java
```
___

## **5	10250	 ACM 호텔**
호텔 방 번호의 규칙을 찾아 출력하는 문제
Y : 층, X: 방번호
YYXX 101 ~ 9999

Y++ 101 201 301 ... 9901 -> 1 ~ Y
X++ 102 202 302 ... 9902

5 10 10
501 [502] 503
401  402  403
301  302  303
201  202  203
101  102  103


```py
for _ in range(int(input())):
    x, y, n = map(int, input().split())
    print(((n-1) % x+1)*100+(n-1)//x+1)
```
```py
exec('h,w,n=map(int,input().split());n-=1;print((n%h+1)*100+n//h+1);'*int(input()))
```

```js
```

```java
```
___

## **6	2775	 부녀회장이 될테야**
층과 거주자 수의 규칙을 찾는 문제

```py
```

```js
```

```java
```
___

## **7	2839	 설탕 배달**
5와 3을 최소 횟수로 합하여 N을 만드는 문제

```py
```

```js
```

```java
```
___

## **8	10757	 큰 수 A+B**
파이썬 같은 언어는 10,000자리 정도의 자연수도 자유롭게 다룰 수 있습니다. 하지만 C/C++이라면 이 문제를 어떻게 풀까요? C/C++ 사용자가 아니더라도 고민해 보면 좋을 것입니다. 

```py
print(sum(map(int, input().split())))
```

```js
```

```java
```
___

## **9	1011	 Fly me to the Alpha Centauri**
거리에 따른 장치 사용 횟수를 출력하는 문제

```py
for _ in range(int(input())):
    a, b = map(int, input().split())
    print(int((4*(b-a)-3)**0.5))
```
```py
n = int(input())
for _ in range(n):
    a, b = map(int, input().split())
    cnt = 0  # 이동 횟수
    movable = 1  # cnt마다 이동 가능거리
    moved = 0  # 이동 거리 총합
    while moved < b - a:  # 이동거리 < 총 거리
        cnt += 1
        moved += movable
        if cnt % 2 == 0:
            movable += 1
    print(cnt)
```

```js
```

```java
```

표를 보면서 차분하게 공식을 일반화시켜보면 규칙을 발견해 풀 수 있다.

![image](https://user-images.githubusercontent.com/66513003/141299845-6509b86c-016d-420f-9c7a-3edb9e993ec5.png)

[ref](https://ooyoung.tistory.com/91)
___