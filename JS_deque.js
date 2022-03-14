let F=1000, B=999;
let L = new Array(2000).fill(0);

const push_front = (v) => {
    L[--F] = v;
}
const push_back = (v) => {
    L[++B] = v;
}
const pop_front = () => {
    let R = L[F];
    L[F++] = 0;
    return R;
}
const pop_back = () => {
    let R = L[B];
    L[B--] = 0;
    return R;
}
const print_deque = () => {
    console.log(L.slice(F, B+ 1));
}
