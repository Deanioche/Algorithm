/*

LeetCode
Algorithms
167. Two Sum II - Input array is sorted
https://leetcode.com/problems/two-sum-ii-input-array-is-sorted/

Given an array of integers numbers that is already sorted in non-decreasing order, find two numbers such that they add up to a specific target number.

Return the indices of the two numbers (1-indexed) as an integer array answer of size 2, where 1 <= answer[0] < answer[1] <= numbers.length.

The tests are generated such that there is exactly one solution. You may not use the same element twice.
*/

/*

# 1
```
    let hash = [];

    for (let i = 0; i < nums.length; i++) {

        const n = target - nums[i];
        if (hash[n] !== undefined) {
            return [hash[n] + 1, i + 1];
        }
        hash[nums[i]] = i;
    }
    return [];
```

# 2
```
    let map = new Map();

    for (let i = 0; i < nums.length; i++) {
        if (map.has(target - nums[i])) {
            return [map.get(target - nums[i]) + 1, i + 1];
        } else {
            map.set(nums[i], i);
        }
    }
    return [];
```


*/

var nums = [2, 17, 11, 15, 7];
var target = 17;

var twoSum = function (nums, target) {

    let map = new Map();

    for (let i = 0; i < nums.length; i++) {
        if (map.has(target - nums[i])) {
            return [map.get(target - nums[i]) + 1, i + 1];
        } else {
            map.set(nums[i], i);
        }
    }
    return [];
};

console.log(twoSum(nums, target));

// return [0, 1]


//###########################################################

// 두 nums 원소의 합에서 target이 존재하면 true를 반환하는 함수

var root = [5, 3, 6, 2, 4, null, 7, 12, 19]
var k = 26;


var findTarget = function (root, k, nums = new Map()) {

    if (!root) return false;

    console.log(root.sort((a, b) => a - b)); // 오름차순 정렬

    const base = root[parseInt(root.sort().length / 2)]; // root.val

    var left = root.filter((e) => e < base && e != null);
    if (left.length < 1) left = null;

    var right = root.filter((e) => e > base);
    if (right.length < 1) right = null;

    console.log(base, left, right);

    if (nums.has(base)) {
        return true;
    }

    nums.set(k - base, 0);
    console.log('nums : ', nums)

    return findTarget(left, k, nums) || findTarget(right, k, nums);

};

console.log(findTarget(root, k))