# **stars**

## **2441 별 찍기 - 4**

```py
n = int(input())

for i in range(0, n):
    print(" " * (i), end="")
    print("*" * (n - i))
```
```
*****
 ****
  ***
   **
    *
```
___

## **2442 별 찍기 - 5**	

```py
n = int(input())

for i in range(1, n + 1):
    print(" " * (n - i), end="")
    print("*" * (i * 2 - 1))
```
```
    *
   ***
  *****
 *******
*********
```

## **2443 별 찍기 - 6**	
```py
n = int(input())

for i in range(n, 0, -1):
    print(" " * (n - i), end="")
    print("*" * (i * 2 - 1))
```
```
*********
 *******
  *****
   ***
    *
```
___

## **2444 별 찍기 - 7**	
```py
n = int(input())

for i in range(1, n + 1, 1):
    print(" " * (n - i), end="")
    print("*" * (i * 2 - 1))

for i in range(n - 1, 0, -1):
    print(" " * (n - i), end="")
    print("*" * (i * 2 - 1))
```
```
    *
   ***
  *****
 *******
*********
 *******
  *****
   ***
    *
```
___

## **2445 별 찍기 - 8**	
```py
n = int(input())

for i in range(1, n, 1):
    print("*" * (i), end="")
    print(" " * (n * 2 - i * 2), end="")
    print("*" * (i))

for i in range(n, 0, -1):
    print("*" * (i), end="")
    print(" " * (n * 2 - i * 2), end="")
    print("*" * (i))
```
```
*        *
**      **
***    ***
****  ****
**********
****  ****
***    ***
**      **
*        *
```
___

## **2446 별 찍기 - 9**	
```py
n = int(input())

for i in range(n, 0, -1):
    print(" " * (n - i), end="")
    print("*" * (i * 2 - 1))

for i in range(2, n + 1, 1):
    print(" " * (n - i), end="")
    print("*" * (i * 2 - 1))
```
```
*********
 *******
  *****
   ***
    *
   ***
  *****
 *******
*********
```
___

## **2447 별 찍기 - 10**	
```py
def ap(n):
    if n == 1:
        return ['*']

    s = ap(n // 3)
    l = []

    for d in s:
        l.append(d * 3)
    for d in s:
        l.append(d + ' ' * (n // 3) + d)

    for d in s:
        l.append(d * 3)

    return l


n = int(input())
print('\n'.join(ap(n)))


# 3
# ['***', '* *', '***']

# 9
# ['*********', '* ** ** *', '*********', '***   ***', '* *   * *', '***   ***', '*********', '* ** ** *', '*********']
```
```
***
* *
***
```

___

## **2448 별 찍기 - 11**	
```py

```

___

## **2522 별 찍기 - 12**
```py

```

___
