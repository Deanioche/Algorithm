// 근무 지옥에 빠진 푸앙이 (Small)
let input = require('fs')
  .readFileSync('dev/stdin', 'utf8')
  .toString()
  .trim()
  .split('\n');

input.shift();
const time = [4, 6, 4, 10];
let res = {};

let week = [];
while (input.length) week.push(input.splice(0, 4));

week.forEach((week) => {
  for (let c = 0; c < 4; c++) {
    week[c].split(' ').forEach((v) => {
      if (v === '-') return;
      res[v] = (res[v] || 0) + time[c];
    });
  }
});

let [max, min] = [0, Infinity];
for (let key in res) {
  max = Math.max(max, res[key]);
  min = Math.min(min, res[key]);
}

if (max - min > 12) {
  console.log('No');
  process.exit();
}
console.log('Yes');