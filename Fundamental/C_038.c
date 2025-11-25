#include <stdio.h>

int main(){
    int a;

    printf("하나의 수 입력 : ");
    scanf("%d", &a);

    if (a > 0)
        printf("입력된 값은 양수");
    else
        if (a == 0)
            printf("입력된 값은 0");
    else
        printf("입력된 값은 음수");

    return 0;
}