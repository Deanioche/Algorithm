// https://programmers.co.kr/learn/courses/30/lessons/42578

var clothes = [["bluesunglasse3s", "eyewear2"], ["yellowhat", "headgear2"], ["bluesunglasses", "eyewear"], ["green_turban", "headgear"], ["bluesunglasse2s", "eyewear"], ["green_turban2", "headgear"]];
var count = 0;
var list = [];

console.log(123);

function solution(clothes) {
    var answer = 0;

    console.log(list.length);

   abc : for(var i = 0; i < clothes.length; i++){
        
        if(list.length == 0){

            list.unshift(clothes[i][1]);
            console.log('list.unshift(' + clothes[i][1] + ')');

        }else {
            console.log('list.length : ' + list.length);

            var num = list.length;
            for(var j = 0; j < num; j++){

                if(clothes[i][1] == list[j]){
                    count += 1;
                    console.log('count : ' + count);
                    break abc;

                }else if(clothes[i][1] != list[j]) {
                    
                    list.unshift(clothes[i][1]);
                    console.log('else list.unshift(' + clothes[i][1] + ')');
                    break abc;
                }
                
            }
            
        }
        
    }
    
    console.log(list, count);

    answer = Math.pow(2, clothes.length) - (count + 1);

    return answer;
}

console.log(solution(clothes));