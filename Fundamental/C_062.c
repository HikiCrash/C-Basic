#include <stdio.h>

int sum(int, int);

int main(){
    int i = 100, k;
    k = sum(i, 200) / 2; // i + 200 / 2

    printf("결과 : %d", k);

    return 0;
}

int sum(int a, int b){
    int t;
    t = a + b;
    
    return t; // t값을 반환.
}