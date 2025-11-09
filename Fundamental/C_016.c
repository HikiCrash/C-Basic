#include <stdio.h>

int main(){
    char c1, c2, c3, c4;
    char *a;
    c1 = 'c', c2 = 'o';
    c3 = 'd', c4 = 'e';
    a = "Dept Of Computer Science";

    printf("%c%c%c%c", c1, c2, c3, c4);
    printf("\n%s\n", a);
    printf("%c%c%c%c", 'c', 'o', 'd', 'e');
    printf("\nDept Of Computer Science\n");

    return 0;
}