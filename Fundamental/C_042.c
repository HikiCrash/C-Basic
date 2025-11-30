#include <stdio.h>

int main(){
    int i = 1, sum = 0;
    while (i <= 10)
    {
        sum = sum + i;
        i++;
    }
    
    printf("1에서 %d까지의 합 = %d", i - 1, sum);

    return 0;
}