#include <stdio.h>

#define TED 10

int main(){
    #ifdef TED
        printf("Hi TED \n");
    #else
        printf("Hi anyone \n");
    #endif

    #ifndef RALPH // ifndef는 정의 되어있지 않았을 시.
        printf("RALPH not defined \n");
    #endif
    
    return 0;
}