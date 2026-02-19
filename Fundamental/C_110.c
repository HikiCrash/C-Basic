#include <stdio.h>

int bubble(int[], int);
int order(int *, int *);

int main(){
    static int a[] = {7, 3, 66, 3, 8, -5, 22, -77, 2}; // 9개 요소를 갖는 정적 배열.
    int h;

    bubble(a, 9); // 요소 정렬.

    for (h = 0; h < 9; ++h)
    {
        printf("%d ", a[h]); // 요소 모두 출력.
    }
    
    return 0;
}

int bubble(int a[], int n)
{
   int i, j;

   for (i = 0; i < n - 1; ++i) // n = 9, 배열의 크기가 n일 때, 전체 정렬은 n-1번 필요.
        for (j = 1; j < n - i; j++) //// j가 1일 때, 0번째 요소와 1번째 요소를 비교. 즉 인접 요소 크기 비교.
            order(&a[j-1], &a[j]); // order함수로 큰 요소를 오른쪽, 작은 요소를 왼쪽으로 배치.

    return 0;
}

int order(int *p, int *q)
{
    int temp; // temp를 이용한 자리 교환 방식도 존재함.

    if (*p > *q) // 자리를 교환함. ex) 7, 3.
    {
        *p = *p + *q; // ex) *p = 7 + 3
        *q = *p - *q; // ex) *q = 10 - 3
        *p = *p - *q; // ex) *p = 10 - 7
    }

    return 0; // *p = 3, *q = 7이 됨.
}
