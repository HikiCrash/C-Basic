#include <stdio.h>

int main(){
    struct person // 구조체 정의.
    {
        char *name;
        int age;
        char sex;
    };
    
    int nai;
    struct person s = {"Kim", 25, 'm'}; // s 변수 초기화. 꼭 구조체 선언한 순서로 배치.
    nai = s.age; // s의 나이를 저장.

    if (nai >= 20)
        printf("%s은 성인", s.name);
    else
        printf("%s는 미성년", s.name);
    
    if (s.sex == 'm')
        printf("남자");
    else
        printf("여자");
    
    return 0;
}