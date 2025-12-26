#include <stdio.h>

int abs(int);

int main(){
    int a = -20;
    while (a < 0){
        printf("a = %3d, 절대값 = %d \n", a, abs(a));
        a += 4;
    }
    
    return 0;
}

int abs(int b){
    if (b >= 0)
        return(b); // 그대로 양수를 반환
    else
        return(-b); // 음수를 양수로 변환 후 반환
}