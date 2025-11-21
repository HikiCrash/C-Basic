#include <stdio.h>

int main(){
    int a = 5, b = 8, c, d, e;
    c = a > 2 && b <= 8; // &&는 and를 뜻함
    printf("c = %d \n", c); // 참, 1 출력

    d = a < 2 || b <= 9; // ||은 or를 뜻함
    printf("d = %d \n", d); // 참, 1 출력

    e = !a; // a는 이미 5값을 갖고 있어서 참인데, ! 부정으로 거짓. 
    printf("e = %d \n", e); // 거짓, 0 출력

    return 0;
}
