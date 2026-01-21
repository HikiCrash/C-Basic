#include <stdio.h>

int main(){
    int data[3] = {10, 20, 30};
    int i, k;

    for (i = 0; i < 3; i++)
    {
        printf("data[%d] : ", i);
        for (k = 0; k < data[i]; k++)
            printf("*");
        printf("\n");
    }

    return 0;
}