#include <stdio.h>

int a = 5;
int func1(), func2(), func3();

int main(){
    int a = 20; // 지역 변수 20.

    printf("main : a = %d \n", a); // 20

    func1();
    func2();
    func3();
}

int func1(){
    a = a + 30; // 전역 변수 5 + 30.
    printf("func1 : a = %d \n", a); // 35
}

int func2(){
    a = a + 50; // 전역 변수 35 + 50.
    printf("func2 : a = %d \n", a); // 85
}

int func3(){
    int a = 0; // 지역 변수 a값을 0.
    a = a + 1; // 0 + 1
    printf("func3 : a = %d \n", a); // 1
}