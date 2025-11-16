#include <stdio.h>

int main(){
    int i = 30;
    int sum, sub, mul, div, mod;

    sum = i + 6;
    sub = i - 5;
    mul = i * 4;
    div = i / 5;
    mod = i % 3;

    printf("sum = %d, sub = %d, mul = %d, div = %d, mod = %d",
    sum, sub, mul, div, mod);

    return 0;
}