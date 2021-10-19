# 단계별로 풀기 - if문

## **1330 두 수 비교하기**

```py
a, b = map(int, input().split())

if a > b:
    print(">")
elif b > a:
    print("<")
else:
    print("==")
```

## **9498 시험 성적**

```py
a = int(input())

if 90 <= a <= 100:
    print("A")
elif 80 <= a < 90:
    print("B")
elif 70 <= a < 80:
    print("C")
elif 60 <= a < 70:
    print("D")
else:
    print("F")
```

## **2753 윤년**
```py
a = int(input())

print(int((a % 4 == 0) and (not(a % 100 == 0) or (a % 400 == 0))))
```

## **14681 사분면 고르기**
```py
x = int(input())
y = int(input())

if x > 0 and y > 0:
    print("1")
elif x < 0 and y > 0:
    print("2")
elif x < 0 and y < 0:
    print("3")
else:
    print("4")
```

## **2884 알람 시계**
```py
h, m = map(int, input().split())

if m >= 45:
    print(h, (m - 45))
elif h == 0:
    print(23, m + 60 - 45)
else:
    print(h - 1, m + 60 - 45)
```

```py
h, m = map(int, input().split())

if m < 45:
    m = m+60-45
    if h == 0:
        h = 23
    else:
        h -= 1
else:
    m -= 45

print(h,m)
```