#include <stdio.h>

int main(){
    int i = 0, n, sum = 0;

    while (i < 5) // 5개의 값을 받아 합산.
    {
        printf("값을 입력 : ");
        scanf("%d", &n);
        sum = sum + n; // sum += n;
        i++;
    }
    printf("합은 %d\n", sum);
} 