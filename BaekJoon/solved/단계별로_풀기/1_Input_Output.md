# **단계별로 풀기 - 1. 입출력**

### **# 참조 링크**

- [파이썬으로 정수 입력 받기](https://tekiter.tistory.com/3)

### **1000번 A + B**
```py
a, b = map(int, input().split())

print(a+b)
```

### **1001번 A - B**
```py
a, b = map(int, input().split())

print(a - b)
```

### **10998번 A * B**
```py
a, b = map(int, input().split())

print(a * b)
```

### **1008번 A / B**
```py
a, b = map(int, input().split())

print(a/b)
```

### **10869번 사칙연산**

```py
a, b = map(int, input().split())

print(a+b)
print(a-b)
print(a*b)
print(int(a/b))
print(a % b)
```

### **10430 나머지**

```py
a, b, c = map(int, input().split())

print((a + b) % c)
print(((a % c) + (b % c)) % c)
print((a * b) % c)
print(((a % c) * (b % c)) % c)
```

### **2588 곱셈**

```py
a = int(input())
b = input()

print(a * int(b[2]))
print(a * int(b[1]))
print(a * int(b[0]))
print(a * int(b))
```

```py
a = int(input())
b = input()

r1 = a * int(b[2])
r2 = a * int(b[1])
r3 = a * int(b[0])
r4 = a * int(b)

print(r1, r2, r3, r4, sep="\n")
```

