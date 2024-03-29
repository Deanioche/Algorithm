// n의 약수를 모두 더하기


/*
[ 문제 설명 ]
정수 n을 입력받아 n의 약수를 모두 더한 값을 리턴하는 함수, solution을 완성해주세요.

제한 사항
n은 0 이상 3000이하인 정수입니다.
입출력 예
n	return
12	28
5	6
입출력 예 설명
입출력 예 #1
12의 약수는 1, 2, 3, 4, 6, 12입니다. 이를 모두 더하면 28입니다.

입출력 예 #2
5의 약수는 1, 5입니다. 이를 모두 더하면 6입니다.
*/

console.log("solution(5) : ", solution(5));
console.log("solution(12) : ", solution(12));

function solution(n) { // 0 < n < 3000
    var answer = 0;
    
    for(i = 1; i <= n; i++ ){
        if(n % i == 0){
            console.log(i);
            answer += i;
        }
    }
    
    return answer;
}