#include <stdio.h>

int main(){
    int i;
    int r[4] = {10, 20, 30, 40};

    for (i = 3; i >= 0; i--) // 배열을 역순으로 출력.
        printf(" %3d", r[i]);

    return 0;
}