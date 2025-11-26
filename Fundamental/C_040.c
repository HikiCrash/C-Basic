#include <stdio.h>

int main(){
    int a, b;
    for (a = 1; a <= 3; ++a)
    {
        printf("a = %d\n", a);
        for (b = 0; b <= 4; b++)
            printf(" b = %d ", b);
        putchar('\n'); // printf("\n");와 같지만 내부 동작이 더 단순하다.
    }
    
    return 0;
}