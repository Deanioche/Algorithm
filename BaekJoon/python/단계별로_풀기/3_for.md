# 단계별로 풀기 - 3. for

## **2749 곱셈**


```py
n = int(input())

a = 1
while a < 10:
    print(f"{n} * {a} = {n * a}")
    a += 1
```

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
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();
        int res = 0;

        for(int i = 1; i <= n; i++) {
            res += i;
        }
        
        System.out.println(res);
        sc.close();
    }
}
```

## **15552 빠른 A + B**

본격적으로 for문 문제를 풀기 전에 주의해야 할 점이 있다. 입출력 방식이 느리면 여러 줄을 입력받거나 출력할 때 시간초과가 날 수 있다는 점이다.

C++을 사용하고 있고 cin/cout을 사용하고자 한다면, cin.tie(NULL)과 sync_with_stdio(false)를 둘 다 적용해 주고, endl 대신 개행문자(\n)를 쓰자. 단, 이렇게 하면 더 이상 scanf/printf/puts/getchar/putchar 등 C의 입출력 방식을 사용하면 안 된다.

Java를 사용하고 있다면, Scanner와 System.out.println 대신 BufferedReader와 BufferedWriter를 사용할 수 있다. BufferedWriter.flush는 맨 마지막에 한 번만 하면 된다.

Python을 사용하고 있다면, input 대신 sys.stdin.readline을 사용할 수 있다. 단, 이때는 맨 끝의 개행문자까지 같이 입력받기 때문에 문자열을 저장하고 싶을 경우 .rstrip()을 추가로 해 주는 것이 좋다.

또한 입력과 출력 스트림은 별개이므로, 테스트케이스를 전부 입력받아서 저장한 뒤 전부 출력할 필요는 없다. 테스트케이스를 하나 받은 뒤 하나 출력해도 된다.

```py
import sys

n = int(input())

while n:
    a, b = map(int, sys.stdin.readline().split())
    print(a + b)
    n -= 1
```
```js
let fs = require('fs');
let input = fs.readFileSync('/dev/stdin').toString().split('\n');

let n = input[0] / 1;
let i = 1;
let res = "";

while (n >= i) {
    let txt = input[i].split(" ");
    let a = txt[0] / 1;
    let b = txt[1] / 1;
    res += (n != i) ? (a + b + "\n") : (a + b);
    i++;
}
console.log(res);
```

```java
import java.io.*;
import java.util.StringTokenizer;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));

        try {
            int n = Integer.parseInt(br.readLine());
            int a = 0;
            int b = 0;

            while (n != 0) {
                StringTokenizer st = new StringTokenizer(br.readLine());
                a = Integer.parseInt(st.nextToken());
                b = Integer.parseInt(st.nextToken());

                bw.write(a + b + "\n");
                n--;
            }
        } catch (IOException e) {
            return;
        }
        bw.flush();
        bw.close();
    }
}
```

[java 한글주석 인코딩 문제](https://yangjae.tistory.com/75)
[java BufferedReader & Writer](https://m.blog.naver.com/ka28/221850826909)

___


## **2741 N 찍기**

```py
n = int(input())
a = 1

while n >= a:
    print(a)
    a += 1
```

```java
import java.io.*;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));

        try {
            int n = Integer.parseInt(br.readLine());
            int a = 1;

            while (n >= a) {
                bw.write(a + "\n");
                a++;
            }
        } catch (IOException e) {
            return;
        }
        bw.flush();
        bw.close();
    }
}
```

___

## **2742 기찍 N**

```py
n = int(input())

while n:
    print(n)
    n -= 1
```
```js
let fs = require('fs');
let input = fs.readFileSync('/dev/stdin').toString().split('\n');

let n = input[0] / 1;
let res = "";
while (n) {
    res += (n != 1) ? (n-- + "\n") : (n--);
}
console.log(res);
```

___

## **11021 A + B - 7**

```js
let fs = require('fs');
let input = fs.readFileSync('/dev/stdin').toString().split('\n');

let n = input[0] / 1; // 3
let i = 1;
let res = "";

while (n >= i) {
    let txt = input[i].split(" ");
    let a = txt[0] / 1;
    let b = txt[1] / 1;
    res += `Case #${i}: ` + ((n != i) ? (a + b + "\n") : (a + b));
    i++;
}
console.log(res);
```

```py
import sys

input = sys.stdin.readline

n = int(input())
i = 1

while n >= i:
    a, b = map(int, input().split())
    print(f"Case #{i}: {a + b}")
    i += 1
```

```java
import java.io.*;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));

        try {
            int n = Integer.parseInt(br.readLine());
            int i = 1;

            while (n >= i) {
                String num[] = br.readLine().split(" ");
                int a = Integer.parseInt(num[0]);
                int b = Integer.parseInt(num[1]);
                bw.write("Case #" + i + ": " + (a + b) + "\n");
                i++;
            }
        } catch (IOException e) {
            return;
        }
        bw.flush();
        bw.close();
    }
}
```

___

## **11022 A + B - 8**

```py
import sys

input = sys.stdin.readline

n = int(input())
i = 1

while n >= i:
    a, b = map(int, input().split())
    print(f"Case #{i}: {a} + {b} = {a + b}")
    i += 1

```

```js
let fs = require('fs');
let input = fs.readFileSync(__dirname + '/dev/stdin').toString().split("\n");

let n = input[0] / 1; // 3
let i = 1;
let res = "";

while (n >= i) {
    let txt = input[i].split(" ");
    let a = txt[0] / 1;
    let b = txt[1] / 1;
    res += `Case #${i}: ${a} + ${b} = ${a + b}`;
    if (n != i) res += "\n";
    i++;
}
console.log(res);
```

```java
import java.io.*;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));

        try {
            int n = Integer.parseInt(br.readLine());
            int i = 1;

            while (n >= i) {
                String num[] = br.readLine().split(" ");
                int a = Integer.parseInt(num[0]);
                int b = Integer.parseInt(num[1]);
                bw.write("Case #" + i + ": " + a + " + " + b + " = " + (a + b) + "\n");
                i++;
            }
        } catch (IOException e) {
            return;
        }
        bw.flush();
        bw.close();
    }
}
```

___


## **2438 별찍기 - 1**

```py
import sys

input = sys.stdin.readline

n = int(input())
i = 1
j = 0

while n != 0:
    while(j < i):
        print("*", end="")
        j += 1
    print()
    j = 0
    i += 1
    n -= 1
```

```js
let fs = require('fs');
let input = fs.readFileSync(__dirname + '/dev/stdin').toString().split("\n");

let n = input[0] / 1; // 5
let i = 1, j = i, res = "";

while (n >= i) {
    j = i;
    while (j != 0) {
        res += "*";
        j--;
    }
    console.log(res);
    res = "";
    i++;
}
```

```java
import java.io.*;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));

        try {
            int n = Integer.parseInt(br.readLine());
            int i = 1;

            while (n >= i) {
                String res = "";
                int j = i;
                while (j != 0) {
                    res += "*";
                    j--;
                }
                bw.write(res + "\n");
                i++;
            }
        } catch (IOException e) {
            return;
        }
        bw.flush();
        bw.close();
    }
}
```

___

## **2439 별 찍기 - 2**

```py
import sys

input = sys.stdin.readline

n = int(input())
i = 1

while n >= i:
    j = n - i
    while j != 0:
        print(" ", end="")
        j -= 1
    j = i
    while j != 0:
        print("*", end="")
        j -= 1
    print()
    i += 1
```

```js
let fs = require('fs');
let input = fs.readFileSync(__dirname + '/dev/stdin').toString().split("\n");

let n = input[0] / 1; // 5
let i = 1, j = i, res = "";

while (n >= i) {
    res = "";
    j = n - i;
    while (j != 0) {
        res += " ";
        j--;
    }
    j = i;
    while (j != 0) {
        res += "*";
        j--;
    }
    console.log(res);
    i++;
}
```

```java
import java.io.*;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));

        try {
            int n = Integer.parseInt(br.readLine());
            int i = 1;

            while (n >= i) {
                String res = "";
                int j = n - i;
                while (j != 0) {
                    res += " ";
                    j--;
                }
                j = i;
                while (j != 0) {
                    res += "*";
                    j--;
                }
                bw.write(res + "\n");
                i++;
            }
        } catch (IOException e) {
            return;
        }
        bw.flush();
        bw.close();
    }
}
```

___

## **10871 X보다 작은 수**

```py
import sys

input = sys.stdin.readline

n, x = map(int, input().split())
lst = list(map(int, input().split()))

i = 0

while i < n:
    if lst[i] < x:
        if i != n:
            print(lst[i], end=" ")
        else:
            print(lst[i], end="")
    i += 1
```

```js
let fs = require('fs');
let input = fs.readFileSync(__dirname + '/dev/stdin').toString().split("\n");

let line_1 = input[0].split(" ");
let n = Number(line_1[0]);
let x = Number(line_1[1]);

let line_2 = input[1].split(" ")

let i = 0;
let res = "";

while (i < n) {
    if (Number(line_2[i]) < x) {
        if (Number(line_2[i]) != x)
            res += line_2[i] + " ";
        else
            res += line_2[i];
    }
    i++;
}
console.log(res);
```

```js
let fs = require('fs');
let input = fs.readFileSync(__dirname + '/../stdin').toString().split('\n');

let line_1 = input[0].split(' ');
let x = line_1[1] / 1;

let line_2 = input[1].split(' ');
line_2 = line_2.map(e => Number(e)).filter(e => e < x);

console.log(line_2.join(" "));
```

```java
import java.io.*;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));

        try {
            String line_1[] = br.readLine().split(" ");
            int n = Integer.parseInt(line_1[0]);
            int x = Integer.parseInt(line_1[1]);

            String line_2[] = br.readLine().split(" ");
            int i = 0;
            while (n > i) {
                if (Integer.parseInt(line_2[i]) < x) {
                    bw.write(line_2[i]);
                    if (Integer.parseInt(line_2[i]) != x)
                        bw.write(" ");
                }

                i++;
            }
        } catch (IOException e) {
            return;
        }
        bw.flush();
        bw.close();
    }
}
```

___

## 

```py
```

```js
```

```java
```