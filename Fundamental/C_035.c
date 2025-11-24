#include <stdio.h>

int main(){
    int a = 10, b = 20;
    if (a > b) // 거짓이므로 if문 작동 안함.
    {
        a = a + 15;
        printf("a = %d\n", a);
    }
    b = b + 30;
    printf("b = %d\n", b);

    return 0;
}