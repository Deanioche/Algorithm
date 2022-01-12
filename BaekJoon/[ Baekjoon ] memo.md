## **백준 풀이할 때 메모**

___


백준은 여러 테스트케이스를 파일로 입력하기 때문에   
여러줄을 받기 힘든 Node.js는 fs.readFileSync를 이용해야 한다.

```js
// 백준
let fs = require('fs');
let input = fs.readFileSync('/dev/stdin').toString().split('\n');

// 내컴
let fs = require('fs');
let input = fs.readFileSync(__dirname + '/stdin').toString().split('\n');
```

- 여러 줄을 입력받을 때 주의할 점
    https://yeoncoding.tistory.com/67