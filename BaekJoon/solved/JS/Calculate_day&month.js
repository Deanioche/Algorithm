/*
[문제 설명]
2016년 1월 1일은 금요일입니다. 2016년 a월 b일은 무슨 요일일까요? 
두 수 a ,b를 입력받아 2016년 a월 b일이 무슨 요일인지 리턴하는 함수, solution을 완성하세요. 
요일의 이름은 일요일부터 토요일까지 각각 SUN,MON,TUE,WED,THU,FRI,SAT 입니다. 
예를 들어 a=5, b=24라면 5월 24일은 화요일이므로 문자열 "TUE"를 반환하세요.

제한 조건
2016년은 윤년입니다.
2016년 a월 b일은 실제로 있는 날입니다. (13월 26일이나 2월 45일같은 날짜는 주어지지 않습니다)
입출력 예
a	b	result
5	24	"TUE"

# "윤년"이란 그레고리력에서 여분의 하루인 2월 29일을 추가하여 1년 동안 날짜의 수가 366일이 되는 해를 말한다
*/

console.log("solution(1,1) : " + solution(1,1));
console.log("solution(5,24) : " + solution(5,24));

function solution(a, b) {
    var answer = '';

    var day = ['SUN','MON','TUE','WED','THU','FRI','SAT']; // 0 ~ 6
    var month = [31,29,31,30,31,30,31,31,30,31,30,31] // Jan ~ Dec
    startDay = day[5]; // 2016 01 01 FRI

    var totalDate = 0;

    for(var i = 0; i < (a - 1); i++){ // add all the maxDate of (Month - 1)

        totalDate += month[i];
    }

    totalDate = totalDate + 4 + b;

    var answer = day[totalDate % 7];

    return answer;
}
