#include <stdio.h>

int main(){
    int a = 12, b = 4, c = 2;
    a *= (b - 1); // a * (b - 1) = 36
    b /= 2 + 3; // b / 5 = 0.8, 소수점 버리고 0.
    c += 2; // c + 2 = 4
    
    printf("a = %d, b = %d, c = %d", a, b, c);

    return 0;
}