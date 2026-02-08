#include <stdio.h>

int main(){
    int *p, a[] = {10, 20, 30, 40, 50};
    p = &a[0]; // 포인터가 배열의 첫번째를 가리킴.

    printf("*p == %d\n", *p); // 10
    printf("a[0] == %d\n", a[0]); // 10 

    p = p + 2; // 포인터 2칸 이동.

    printf("*p == %d\n", *p); // 30
    printf("*(p+2) == %d\n", *(p+2)); // 50
    printf("a[2] == %d\n", a[2]); // 30
    printf("*p + 2 == %d\n", *p + 2); // 포인터가 가리키는 값에 2를 더함. 32

    return 0;
}