# 브론즈 5 문제들 끝내기 python

[link](https://www.acmicpc.net/problemset?sort=no_asc&solvedac_option=xz%2Cxn&submit=us&tier=1)

## **1271	 엄청난 부자2**

```py
a, b = map(int, input().split())

print(a // b)
print(a % b)
```
___

## **1550	 16진수**

```py
print(int(input(), 16))
```
___

## **2338	 긴자리 계산**

```py
a = int(input())
b = int(input())

print(a+b, a-b, a*b, sep="\n")
```
___

## **2475	 검증수**

```py
print(sum(i**2 for i in map(int, input().split())) % 10)
```
___

## **2558	 A+B - 2**

```py
a = int(input())
b = int(input())

print(a + b)
```
___

## **2845	 파티가 끝나고 난 뒤**

```py
a, b = map(int, input().split())
l = list(map(int, input().split()))

for i in l:
    print(i - a * b, end=" ")
```
___

## **2914	 저작권	**

```py
a, b = map(int, input().split())

print(a * (b - 1) + 1)
```
___

## **3003	 킹, 퀸, 룩, 비숍, 나이트, 폰**

```py
l = list(map(int, input().split()))
o = [1, 1, 2, 2, 2, 8]

for i in [a - b for a, b in zip(o, l)]:
    print(i, end=" ")
```
___

## **3046	 R2**

```py
a, b = map(int, input().split())

print(b * 2 - a)
```
___

## **5337	 웰컴**

```py

```
___

## **5338	 마이크로소프트 로고**

```py
print("""       _.-;;-._
'-..-'|   ||   |
'-..-'|_.-;;-._|
'-..-'|   ||   |
'-..-'|_.-''-._|""")
```
___

## **5339	 콜센터**

```py

```
___

## **5522	 카드 게임**

```py
import sys
w = sys.stdin.readline
r = 0
for _ in range(5):
    r += int(w())

print(r)
```
___

## **5554	 심부름 가는 길**

```py
import sys
w = sys.stdin.readline
r = 0
for _ in range(4):
    r += int(w())

print(r // 60)
print(r % 60)
```
___

## **6749	 Next in line**

```py
import sys
w = sys.stdin.readline
a = int(w())
b = int(w())
print(b + (b - a))
```
___

## **7287	 등록**

```py

```
___

## **8370	 Plane**

```py

```
___

## **8437	 Julka**

```py

```
___

## **9653	 스타워즈 로고**

```py

```
___

## **9654	 나부 함대 데이터**

```py

```
___

## **10170	 NFC West vs North**

```py

```
___

## **10699	 오늘 날짜**

```py

```
___

## **10926	 ??!		**

```py

```
___

## **11283	 한글 2		**

```py

```
___

## **11382	 꼬마 정민	**

```py

```
___

## **11942	 고려대는 사랑입니다**

```py
print("고려대학교")
```
___

## **13277	 큰 수 곱셈		**

```py

```
___

## **14645	 와이버스 부릉부릉	**

```py

```
___

## **14652	 나는 행복합니다~	**

```py

```
___

## **14928	 큰 수 (BIG)		**

```py

```
___

## **15439	 Vera and Outfits	               **

```py

```
___

## **15727	 조별과제를 하려는데 조장이 사라졌다**

```py

```
___

## **15733	 나는 누구인가**

```py

```
___

## **15740	 A+B - 9**

```py

```
___

## **15894	 수학은 체육과목 입니다	**

```py

```
___

## **15962	 새로운 시작**

```py

```
___

## **15964	 이상한 기호**

```py

```
___

## **16170	 오늘의 날짜는?**

```py

```
___

## **16394	 홍익대학교**

```py
n = int(input())

print(n - 1946)
```
___

## **16430	 제리와 톰**

```py

```
___

## **17256	 달달함이 넘쳐흘러**

```py

```
___

## **17295	 엔드게임 스포일러**

```py

```
___

## **17496	 스타후르츠**

```py

```
___

## **18096	 Арифметическая магия**

```py

```
___

## **18108	 1998년생인 내가 태국에서는 2541년생?!**

```py

```
___

## **18301	 Rats**

```py

```
___

## **20254	 Site Score**

```py

```
___

## **20492	 세금**

```py
n = int(input())
print(int(n / 100 * 78), int(n / 100 * 20 / 100 * 78 + n / 100 * 80))
```
___

### **21300	 Bottle Return**

```py
l = list(map(int, input().split()))

print(sum(l) * 5)
```
___

### **22193	 Multiply**

```py
input()

print(int(input()) * int(input()))
```
___

### **23234	 The World Responds**

```py
print("The world says hello!")
```
___
