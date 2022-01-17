# **단계별로 풀기 - 4. while**

## **10952 A + B - 5**

```py
import sys

input = sys.stdin.readline

while True:
    a, b = map(int, input().split())
    if a + b:
        print(a + b)
    else:
        break
```

```js
let fs = require('fs');
let input = fs.readFileSync(__dirname + '/dev/stdin').toString().split('\n');

let i = 0;
let res = "";

while (true) {
    let nums = input[i].split(" ");
    let a = nums[0] / 1;
    let b = nums[1] / 1;
    if (a + b)
        res += (a + b);
    if (input[i + 1] != "0 0") res += "\n";
    else break;
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
        boolean s = false; // 줄바꿈

        try {
            while (true) {
                String line_1[] = br.readLine().split(" ");
                int a = Integer.parseInt(line_1[0]);
                int b = Integer.parseInt(line_1[1]);

                if (a + b != 0) {
                    if (s)
                        bw.write("\n");
                    bw.write(a + b + "");
                } else
                    break;
                s = true;
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

## **10951 A + B - 4**

```py
import sys

input = sys.stdin.readline

while True:
    txt = input().rstrip()
    if txt == "":
        break
    a, b = map(int, txt.split())
    print(a + b)
```

```js
let fs = require('fs');
let input = fs.readFileSync(__dirname + '/dev/stdin').toString().split('\n');

let i = 0;
let res = "";

while (i < input.length - 1) {
    let nums = input[i].split(" ").map(e => Number(e));
    res += (nums[0] + nums[1] + "\n");
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
        String str;
        try {
            while ((str = br.readLine()) != null) {
                String line_1[] = str.split(" ");
                int a = Integer.parseInt(line_1[0]);
                int b = Integer.parseInt(line_1[1]);

                if (a + b != 0) {
                    bw.write(a + b + "\n");
                } else
                    break;
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

## **1110 더하기 사이클**

```py
import sys

input = sys.stdin.readline
n = int(input())
ans = n
a = 0
count = 0

while True:
    a = ((n % 10) * 10) + (((n // 10) + (n % 10)) % 10) # 26 // 10 == 2
    n = a
    count += 1

    if a == ans:
        break

print(count)
```
```py
N = "26"
temp = str(int(N[-1] + f"{sum(map(int, N.zfill(2)))}"[-1]))

print(N[-1])  # 뒤에서 첫번째 문자
print(N.zfill(5))  # 00026 # 문자열 N이 5자리 보다 짧으면 부족한 만큼 앞을 0으로 채운다.
print(f"{sum(map(int, N.zfill(2)))}"[-1])
# 1. 문자열 N이 2자리가 안되면 앞을 0으로 채우고(N.zfill(2))
# 2. 각 자리를 int로 바꿔 sum() 하고 이걸 문자열로 다시 받아(f"{...}") 뒤에서 첫 문자([-1])를 출력.

count = 1
while N != temp:
    count += 1
    temp = str(int(temp[-1] + f"{sum(map(int, temp.zfill(2)))}"[-1]))
print(count)
```

```js
let fs = require('fs');
let input = fs.readFileSync(__dirname + '/dev/stdin').toString().split('\n');

let n = Number(input[0]);
let ans = n;
let count = 0;

while (true) {
    count++;

    let a = Math.floor(n / 10);
    let b = n % 10;
    let c = a + b;
    n = b * 10 + c % 10;

    if (n == ans) break;
}
console.log(count);
```

```java
import java.io.*;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        int n = Integer.parseInt(br.readLine());
        int ans = n;
        int count = 0;
        try {
            while (true) {
                count++;

                int a = n / 10;
                int b = n % 10;
                int c = a + b;
                n = b * 10 + c % 10;

                if (n == ans)
                    break;
            }
            bw.write(count + "");

        } catch (IOException e) {
            return;
        }
        bw.flush();
        bw.close();
    }
}
```