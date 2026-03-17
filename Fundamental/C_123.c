#include <stdio.h>

#define FUDGE(k) ((k) + 3.14159) // k에 3.14159를 더하는 매크로
#define PR(a) printf(#a "= %d\t",(int)(a)) // #a -> 인자를 문자열로 바꿔서 "식 = 값"형태로 출력
#define PRINT(a) PR(a); putchar('\n') // PR출력 후 줄 바꿈
#define PRINT2(a, b) PR(a); PRINT(b) // a 출력 후 b 출력
#define PRINT3(a, b, c) PR(a); PRINT2(b, c) // a, b, c 순서대로 출력

int MAX(int a, int b){ // 두 값중 큰 수 반환.
    return a < b ? b : a;
}

int main(){
    {
        int x = 2;
        PRINT(x * FUDGE(2)); // x * (2 + 3.14159)
    }
    {
        int cel;
        for(cel = 0; cel <= 100; cel += 50) // 0, 50, 100 반복
            PRINT2(cel, 9. / 5 * cel + 32); // 섭씨 -> 화씨 변환 출력
    }
    {
        int x = 1, y = 2;
        PRINT3( MAX(x++, y), x, y); // x 후위증가.
        PRINT3( MAX(x++, y), x, y); // x값 변화 추적.   
    }
    
    return 0;
}
