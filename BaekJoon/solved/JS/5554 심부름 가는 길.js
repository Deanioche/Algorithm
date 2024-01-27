let i = require("fs").readFileSync("./dev/stdin").toString().split("\n").reduce((a, b) => +a+ +b);
console.log(`${i/60|0}\n${i%60}`);