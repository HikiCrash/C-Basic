#include <stdio.h>

int main(){
    int i, cnt = 1;

    for (i = 1; i < 100; i += 2)
    {
        printf(" %3d", i);

        if (cnt == 10) // 10번째 숫자마다 줄바꿈을 출력.
            {printf("\n"); cnt = 0;}
        cnt++;
    }

    return 0;
}