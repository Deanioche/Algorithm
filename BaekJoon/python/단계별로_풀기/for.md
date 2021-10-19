## **2749 곱셉**

```java
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int j = sc.nextInt();

        for(int i = 1; i < 10; i++){
            System.out.println(j + " * " + i + " = " + j * i);
        }
        sc.close();
    }
}
```

```py
n = int(input())

a = 1
while a < 10:
    print(f"{n} * {a} = {n * a}")
    a += 1
```

## **10950 A + B - 3**

```py
n = int(input())

while n != 0:
    a, b = map(int, input().split())
    print(a + b)
    n -= 15
```

```java
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int len = sc.nextInt();

        for(int i = 0; i < len; i++) {
            int a = sc.nextInt();
            int b = sc.nextInt();
            System.out.println(a + b);
        }
        sc.close();
    }
}
```

## **8393 합**

```py
n = int(input())

res = 0

while n != 0:
    res += n
    n -= 1

print(res)
```

```java

```