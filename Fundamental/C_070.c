#include <stdio.h>

int main(){
    auto int i = 10; // auto는 기본값이라 없어도 됨.
    int j = 20;
    {
        int i = 30;
        printf("1---i = %d\n", i); // 블록 안에서 30으로 다시 설정.
        printf("2---j = %d\n", j); // 블록 밖 20을 사용.
    }
    
    printf("3---i = %d\n", i); // 10을 사용.
    printf("4---j = %d\n", j); // 20.
    
    return 0;
}