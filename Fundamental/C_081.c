#include <stdio.h>

int main(){
    int a[4];
    int i, sum = 0;
    a[0] = 3;
    a[1] = 9;
    a[2] = 5;
    a[3] = 7;

    for (i = 0; i < 4; i++)
        sum += a[i];
    
    printf("배열 원소들의 합 = %d\n", sum);

    return 0;
}