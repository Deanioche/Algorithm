let I = +require("fs").readFileSync("./dev/stdin").toString();

l = [];
R = "";
for (let i = 0; i < I; i++) l[i] = i + 1;
for (let i = 0; i < I; l[I++] = l[i], i++) R += `${l[i++]} `;
console.log(R);
