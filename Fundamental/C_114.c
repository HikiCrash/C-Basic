#include <stdio.h>

int main(){
    struct fullname
    {
        char lname[20]; // 성.
        char fname[10]; // 이름.
    };
    
    struct person
    {
        struct fullname name; // 중첩 구조체.
        
        int age; // 나이.
        int sex; // 성별.
    };
    
    static struct person s = {{"GilDong", "Hong"}, 25, 'm'}; // 성 이름 나이 성별.

    printf("이름 : %s 성 : %s 나이 : %d 성별 : %c",
            s.name.lname, s.name.fname, s.age, s.sex);

    return 0;
}