#include <stdio.h>

int main(){
    int a = 10, b = 20;
    if (b > a) a = a + 15;
    b = b + 30;

    printf("a = %d, b = %d", a, b);

    return 0;
}