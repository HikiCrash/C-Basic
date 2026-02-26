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

    int i, sum = 0;

    for (i = 0; i < 3; i++) // 3명의 정보를 출력하는 for문.
    {
        printf("이름 : %s 나이 : %d 성별 : %c\n"
               , s[i].name, s[i].age, s[i].sex);
            
        sum = sum + s[i].age; // 나이 합산.
    }

    printf("나이합 : %d", sum);

    return 0;
}