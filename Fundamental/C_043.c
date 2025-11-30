#include <stdio.h>

int main(){
    int code = 0;

    printf("코드(1~3) 입력 (9를 누르면 종료): ");
    
    while (code != 9) // 코드가 9 값을 가지기 전까지 반복
    {
        putchar('\n');
        scanf("%d", &code);
        switch(code)
        {
            case 1: printf("입력한 코드는 1 입니다.");
                break;
            case 2: printf("입력한 코드는 2 입니다.");
                break;
            case 3: printf("입력한 코드는 3 입니다.");
                break;
            case 9: printf("프로그램을 종료합니다.");
                break;
            default: printf("잘못 입력 하였습니다.");
        }
    }
    
    return 0;
}
