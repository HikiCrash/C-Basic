#include <stdio.h>

int main(){
    int a[5] = {50, 40, 30, 20, 10};
    int i;
    
    printf("********************\n");
    printf("  인덱스   값  \n");
    printf("********************\n");

    for (i = 0; i < 5; i++)
        printf("%5d   %5d\n", i, a[i]);
    
    return 0;
}