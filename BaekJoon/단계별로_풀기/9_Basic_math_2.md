# **Basic_math 2**

## **1	1978	 소수 찾기**
2부터 X-1까지 모두 나눠서 X가 소수인지 판별하는 문제 1

```py
input()
m = map(int, input().split())
print(sum(all(n % j for j in range(2, n))*n > 1 for n in m))
```

```py
def isP(n):
    i = 2
    if n <= 1:
        return False
    while i * i <= n:
        if n % i == 0:
            return False
        i += 1
    return True

input()
m = map(int, input().split())
print(len(list(filter(isP, m))))
```

```js
```

```java
```

```c
```
___

## **2	2581	 소수**
2부터 X-1까지 모두 나눠서 X가 소수인지 판별하는 문제 2

```py
```

```js
```

```java
```

```c
```
___

## **3	11653	 소인수분해**

```py
```

```js
```

```java
```

```c
```

___
N을 소인수분해하는 문제

## **4	1929	 소수 구하기**
에라토스테네스의 체로 풀어 봅시다.


#### **# 에라토스테네스의 체**

    일정 범위내 수열에서 배수들을 제거해 소수만 남기는 방법  
    ex) 수열 [2 3 4 5 6 7 8 9 10] 에서 2의 배수 제거  
    => [2 3 5 7 9] 에서 3의 배수 제거  
    => [2 3 5 7]  

```py
n, m = map(int, input().split())

def isP(n):
    i = 2
    if n <= 1:
        return False
    while i * i <= n:
        if n % i == 0:
            return False
        i += 1
    return True

for i in range(n, m+1):
    if isP(i):
        print(i)
```

```js
```

```java
```

```c
#include <stdio.h>

int isP(int nb)
{
    int i;

    i = 2;
    if (nb <= 1)
        return (0);
    while (i * i <= nb)
    {
        if (nb % i == 0)
            return (0);
        i++;
    }
    return (1);
}

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);

    while (a <= b)
    {
        if (isP(a))
            printf("%d\n", a);
        a++;
    }
}
```

```java
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader re = new BufferedReader(new InputStreamReader(System.in));
        String nums[] = re.readLine().split(" ");
        int min = Integer.parseInt(nums[0]);
        int max = Integer.parseInt(nums[1]);

        for (int i = min; i < max + 1; i++) {
            if (isPrime(i)) {
                System.out.println(i);
            }
        }
    }

    public static Boolean isPrime(int num) {
        if (num < 2) {
            return false;
        }
        for (int i = 2; i < 46341 && i * i <= num; i++) {
            if (num % i == 0) {
                return false;
            }
        }
        return true;
    }
}
```
___

## **5	4948	 베르트랑 공준**
소수 응용 문제 1

```py
```

```js
```

```java
```

```c
```
___

## **6	9020	 골드바흐의 추측**
소수 응용 문제 2

```py
```

```js
```

```java
```

```c
```
___

## **7	1085	 직사각형에서 탈출**
직사각형과 점의 거리를 구하는 문제

```py
```

```js
```

```java
```

```c
```
___

## **8	3009	 네 번째 점**
직사각형을 완성하는 문제

```py
```

```js
```

```java
```

```c
```
___

## **9	4153	 직각삼각형**
피타고라스의 정리에 대해 배우는 문제

```py
```

```js
```

```java
```

```c
```
___

## **10	3053	 택시 기하학**
유클리드 기하학과 택시 기하학에 대한 문제

```py
```

```js
```

```java
```

```c
```
___

## **11	1002	 터렛**
두 원의 교점의 개수를 구하는 문제

```py
```

```js
```

```java
```

```c
```
___