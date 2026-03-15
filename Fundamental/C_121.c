#include <stdio.h>

#define MAN 1 // MAN이라는 매크로를 1로 정의

#undef MAN // 매크로 정의 해제.

#define BLUE 1 // BLUE를 1로 정의
#define RED 2 // RED를 2로 정의

int main(){

    int color;

    #ifdef MAN // 정의 되었을 시.
        color = BLUE;
    #else // 정의 되어있지 않았을 시.
        color = RED;
    #endif

    return 0;
}