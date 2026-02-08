#include <stdio.h>

int main(){
    static int a[3][4] = {{1, 2, 3, 0},
                          {4, 5, 6, 0},
                          {7, 8, 9, -999}};
    
    int *pa;
    pa = &a[0][0]; // 배열 첫번째 주소 값을 저장.

    while (*pa != -999) // -999를 만나면 종료.
    {
        printf("%d ", *pa);

        pa++; // 다음 주소 값으로 이동.
    }

    return 0;
}