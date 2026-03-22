#include <stdio.h>

int main(int argc, char *argv[]){
    int c;
    FILE *fp1, *fp2;
    
    fp1 = fopen(argv[1], "r"); // 첫번째 인자를 입력 파일로 읽기 모드로 열기.
    if (fp1 == NULL){
        printf("입력 파일 열기 실패\n");
        return 1; // 에러상태로 종료
    }

    fp2 = fopen(argv[2], "w"); // 두번째 인자를 출력 파일로 쓰기 모드로 열기.
    if (fp2 == NULL){
        printf("출력 파일 열기 실패\n");
        fclose(fp1); // 열려있는 파일 닫기
        return 1; // 에러상태로 종료
    }
    while ((c = getc(fp1)) != EOF){
        putchar(c); // 읽은 문자를 콘솔에 출력.
        putc(c, fp2); // 출력 파일에도 기록
    }
    
    fclose(fp1);
    fclose(fp2);

    return 0;
}