#include <stdio.h>

int main(){
    int i = 0, sum = 0;
    while (1) // 1은 True이기 때문에, 무한루프.
    {
        i = i + 1;
        sum = sum + i;
        if (i == 100) break;
    }
    printf(" i = %d sum = %d", i, sum);

    return 0;
}