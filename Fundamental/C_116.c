#include <stdio.h>

struct st 
{
    int a;
    int b;
    float c;
};

float sum(struct st *sp); // 구조체 포인터를 매개변수로 하는 함수 선언.

int main(){
    static struct st s = {100, 200, 123.5};
    float hap;

    hap = sum(&s); // 구조체 s의 주소를 함수에 할당.   

    printf("멤버의 합 = %f\n", hap);
    printf("멤버의 평균 = %f\n", hap / 3);

    return 0;
}


float sum(struct st *sp)
{
    return (sp -> a + sp -> b + sp -> c); // 포인터로 구조체 요소 접근 후 반환.
}