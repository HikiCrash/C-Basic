#include <stdio.h>

int main(){
    int i;
    int a[4] = {10, 20, 30, 40};
    int b[4];

    for (i = 0; i < 4; i++)
        b[i] = a[i]; // b배열에 a배열을 복사.

    for (i = 0; i < 4; i++)
        printf(" %3d", b[i]);

    return 0;
}