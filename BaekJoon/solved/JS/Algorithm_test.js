/**
 * @param {number[]} arr
 * @return {void} Do not return anything, modify arr in-place instead.
 */

var nums1 = [1, 2, 3, 0, 0, 0];
var m = 3;
var nums2 = [2, 5, 6];
var n = 3;

var merge = function (nums1, m, nums2, n) {

    // # 1
    return nums1.concat(nums2).sort((a, b) => (a - b)).splice(-(m + n));

    // # 2
    nums1.splice(m);
    nums2.splice(n);
    return [...nums1, ...nums2].sort()
    return nums1.concat(...nums2).sort() // 동일
};

console.log(merge(nums1, m, nums2, n));

// Output = 6

const padArray = (length, value) => [...Array(length).fill(0), value];

console.log(padArray(9, 5));