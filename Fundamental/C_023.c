#include <stdio.h>

int main(){
    printf("%d %d %d %d\n",
    1 + 2, 5 / 2, -2 * 4, 11 % 3);

    printf("%.3f %.2f %.5f\n",
    1. + 2, 5. / 2., -2 * 4.);

    return 0;
}