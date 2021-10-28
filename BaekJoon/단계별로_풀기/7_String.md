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