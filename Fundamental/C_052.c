#include <stdio.h>

int main(){
    int score, n;
    float sum, avg;
    n = 0;
    sum = 0;
    score = 0;

    printf("입력종료는 음수 점수를 입력\n");

    while (score >= 0) // 양수 점수일 때만 실행.
    {
        printf("점수 입력: ");
        scanf("%d", &score); // 총점
        sum += score;
            n++;
    }
    sum = sum - score; // 입력종료를 위한 음수 점수 제거
        n--; // 음수 점수는 개수에서 제외.
    avg = sum / n; // 평균 계산

    printf("입력 점수의 총점은 %.0f, 평균은 %.2f\n", sum, avg);

    return 0;
}