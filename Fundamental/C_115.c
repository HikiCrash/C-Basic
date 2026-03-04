#include <stdio.h>

int main(){
    struct person // 구조체 정의.
    {
        char *name;
        int age;
        char sex;
    };
    
    static struct person s[3] = {{"Kim", 25, 'm'}, // 3명의 정보 입력.
                                 {"Lee", 20, 'f'},
                                 {"Park", 30, 'f'}};

    struct person *p; // 구조체 포인터 선언.
    int i, sum = 0;

    p = s; // p가 s[0]을 가리킴.

    for ( i = 0; i < 3; i++)
    {
        printf("이름 : %s 나이 : %d 성별 : %c \n",
         p -> name, p -> age, p -> sex); // 포인터로 구조체 요소 접근.
        
        sum = sum + p -> age; // 나이 누적.
        p++; // 다음 구조체로 이동.
    }

    printf("나이합 : %d", sum);

    return 0;
}

    