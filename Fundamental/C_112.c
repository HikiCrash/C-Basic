#include <stdio.h>

int main(){
    int i;
    
    struct wiseong // 위성 구조체.
    {
        char name; // 이름
        int kwangdo; // 광도
        double jugi; // 주기
    };
    
    static struct wiseong a[4] = {{'I', 5, 1.7691}, // 4개의 구조체 배열.
                                  {'E', 6, 3.5512},
                                  {'G', 5, 6.1545},
                                  {'C', 6, 16.6890}};
    
    for (i = 0; i < 4; i++)
        printf("%c%3d%8.4f\n", a[i].name, a[i].kwangdo, a[i].jugi); // 각 필드 출력.

    return 0;
}