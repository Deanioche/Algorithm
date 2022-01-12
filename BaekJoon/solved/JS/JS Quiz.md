# **JS Quiz**

## **1. 배열 nums에서 가장 길게 연속되는 1의 길이 구하기**

```js
var nums = [1, 1, 0, 1, 1, 1, 0];


var findMaxConsecutiveOnes = function (nums) {

    return nums.join("").split("0").sort((a, b) => b.length - a.length)[0].length;
};
```

Output = 3

___

## **2. 배열 nums에서 자릿수가 짝수인 원소 개수 구하기**

```js
var nums = [12,345,2,6,7896];

var findNumbers = function (nums) {

    return nums.filter((e) => e.toString().length % 2 == 0).length;

};
```
Output = 2

___


## **3. 배열 원소를 제곱 후 오름차순 정렬**


```js
var nums = [-4, -1, 0, 3, 10];

var sortedSquares = function (nums) {

    return nums.map(e => e * e).sort((a, b) => a - b);

};
```

Output : [ 0, 1, 9, 16, 100 ]

___

## 4. 배열 길이를 유지하며 0을 복제

```js
var arr = [1, 0, 2, 3, 0, 4, 5, 0];

var duplicateZeros = function (arr) {

    for (var i = 0; i < arr.length; i++) {
        if (arr[i] == 0) {
            arr.splice(i, 0, 0);
            arr.pop();
            i++;
        }
    }

    return arr;

};
```

Output - [1, 0, 0, 2, 3, 0, 0, 4]


___

