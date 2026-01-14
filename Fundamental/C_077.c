#include <stdio.h>

int k = 10;

int set_k(int i){
    k = i;

    return 0;
}

int main(){
    printf(" k = %d \n", k); // 전역 변수 10

    k = 300;
    printf(" k = %d \n", k); // 300

    set_k(50);
    printf(" k = %d \n", k); // 50

    return 0;
}