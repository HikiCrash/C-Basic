#include <stdio.h>
 
int plus(int, int, int);

int main(){
    int a = 10, b = 20, c = 0; // 지역 변수 설정.

    plus(a, b, c); // plus 함수를 호출하지만, 전역 변수가 아니라서 c값은 유지.

    printf("c = %d\n", c); // 0.

    return 0;
}

int plus(int s1, int s2, int s3){
    s3 = s1 + s2; // 이 함수에서 c값은 30임.

    return 0;
}