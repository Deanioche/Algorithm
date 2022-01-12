/*

LeetCode
Algorithms
Top 100 Liked Questions
1. Two Sum
https://leetcode.com/problems/two-sum/

*/

/*

Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

You can return the answer in any order.

# 1
```
for (var i = 0; i < nums.length; i++) {
    for (var j = 0; j < nums.length; j++) {
        if (i != j && nums[i] + nums[j] == target) {
            return [i, j]
        }
    }
}
```

# 2
```
let hash = [];

for (let i = 0; i < nums.length; i++) {

    const n = target - nums[i];
    if (hash[n] !== undefined) {
        return [hash[n], i];
    }
    hash[nums[i]] = i;
}
return [];
```

# 3
```
let map = new Map();

for (let i = 0; i < nums.length; i++) {
    if (map.has(target - nums[i])) {
        return [map.get(target - nums[i]), i];
    } else {
        map.set(nums[i], i);
    }
}
return [];
```


*/

var nums = [2, 7, 11, 15];
var target = 9;

var twoSum = function (nums, target) {

    let hash = [];

    for (let i = 0; i < nums.length; i++) {

        const n = target - nums[i];
        if (hash[n] !== undefined) {
            return [hash[n], i];
        }
        hash[nums[i]] = i;
    }
    return [];

};

console.log(twoSum(nums, target));

// return [0, 1]
