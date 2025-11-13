#include <stdio.h>

int main(){
    char var = 'k';
    putchar(var); // k
    putchar(var+1); // L
    putchar('\n'); // 줄바꿈
    putchar('A'); // A
    putchar('A' + 2); // C
    putchar('\007'); // 경고음 출력
    
    return 0;
}