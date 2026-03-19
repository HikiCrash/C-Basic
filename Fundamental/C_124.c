#include <stdio.h>

#define NEG(a) (-(a)) // a를 음수로 만드는 매크로
#define weeks(mins) (days(mins)/7) // 분 -> 주 변환 (days 호출)
#define days(mins) (hours(mins)/24) // 분 -> 일 변환 (hours 호출)
#define hours(mins) (mins/60) // 분 -> 시간 변환 
#define mins(secs) (secs/60) // 초 -> 분 변환
#define TAB(c, i, oi, t) if (c == '\t')\ 
    for (t = 8 - (i - oi - 1)%8, oi = i; t; t--)\ 
        putchar(' ')
// 현재 문자가 탭이면 실행, 다음 탭까지 공백 개수 계산, 공백 출력.

#define PR(a) printf(#a"= %d\t", (int)(a)) // 식을 문자열로 출력, 계산 결고 출력
#define PRINT(a) PR(a); putchar('\n') // 출력 후 줄 바꿈

int main(){
    {
        int x = 1;
        PRINT( -NEG(x) ); // 1을 -- 두개를 붙여서 양수로 만듦.
    }
    {
        PRINT( weeks(10080) ); // 10080분을 주 단위로 변환 -> 1주
        PRINT( days(mins(86400)) ); // 86400분을 일 단위로 변환 -> 1일
    }
    {
        static char input[] = "\twhich\tif?"; 
        char c;
        int i, oldi, temp; // 인덱스, 이전 탭 위치, 공백 계산용 변수.
        
        for (oldi = -1, i = 0; (c = input[i]) != '\0'; i++){ // 문자열 끝까지 반복.
            if (c < ' ') {TAB(c, i, oldi, temp);} // 탭일 경우 공백으로 변환.
            else putchar(c); // 일반 문자는 그대로 출력.
            putchar('\n'); // 각 문자마다 줄 바꿈.
        }
    }

    return 0;
}