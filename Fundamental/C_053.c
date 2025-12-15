#include <stdio.h>

int main(){
    int i;
    printf("********************\n");
    printf("* i     i의 세제곱 *\n");
    printf("********************\n");

    for (i = 1; i <= 5; i++)
        printf("%3d     %5d\n", i, i*i*i); // 3칸, 5칸 공백 지정.

    return 0;
}