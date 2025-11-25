#include <stdio.h>

int main(){
    int a;
    
    printf("하나의 수 입력 : ");
    scanf("%d", &a);
    // C_038과 같은 내용을 다르게 코딩.
    if (a >= 0)
    {
        if (a == 0)
            printf("입력된 값은 0");
        else
            printf("입력된 값은 양수");
    }
    else
        printf("입력된 값은 음수");

    return 0;
}