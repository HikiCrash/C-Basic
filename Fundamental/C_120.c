#include <stdio.h>

#define US 0
#define ENGLAND 1
#define FRANCE 2
#define ACTIVE_COUNTRY US // 현재 국가 US.

int main(){
    #if ACTIVE_COUNTRY == US // 해당 조건을 만족함.
        char currency[7] = "dollar"; // 이 코드를 실행함.
    #elif ACTIVE_COUNTRY == ENGLAND
        char currency[6] = "pound";
    #else
        char currency[6] = "franc";
    #endif

    return 0;
}