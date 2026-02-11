#include <stdio.h>

int main(){
    static int a[] = {10, 20, 30, 40, 50};
    int *p, b, c, d;

    p = a; // 배열의 첫 요소를 가리킴. (10)
    b = *p + *(p + 3); // 10 + 40.

    p++; // 다음 배열의 요소를 가리킴. (20)

    c = *p + *(p + 3); // 20 + 50.
    d = *p + 3; // 20 + 3.

    printf("b = %d c = %d d = %d", b, c, d); // 50, 70, 23.

    return 0;
}