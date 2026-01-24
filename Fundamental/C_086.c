#include <stdio.h>

int main(){
    static int score[4][3] = { {90, 90, 90}, // 학생 4, 점수 3 배열.
                                {80, 80, 80},
                                {70, 70, 70},
                                {60, 60, 60}};
    int sum, i, j;

    printf("번호   국어   영어   수학    총점\n");
    printf("________________________________________\n");

    for (i = 0; i < 4; ++i) // 학생 수 반복.
    {
        sum = 0;

        printf("%3d", i+1);
        
        for (j = 0; j < 3; j++){ // 과목 수 반복.
            printf("%7d", score[i][j]); // 점수 출력.
            sum += score[i][j]; // 총점 집계.
        }
        printf("%8d\n", sum); // 총점 출력.
    }

    return 0;
}