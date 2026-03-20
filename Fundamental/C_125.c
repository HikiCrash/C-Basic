#include <stdio.h>

int main(void){
     int c;
     FILE *ifp, *ofp; // 파일 포인터.

     if ((ifp = fopen("input.txt", "r")) == NULL){ // 읽기 모드로 열기
        printf("입력파일을 열 수 없습니다.\n"); // 실패 시 출력.
        return 1; // 에러 상태로 프로그램 종료
     }

     if ((ofp = fopen("output.txt", "w")) == NULL){ // 쓰기 모드로 열기, 없으면 생성.
        printf("출력파일을 열 수 없습니다.\n"); // 실패 시 출력.
        return 1; // 에러 상태로 프로그램 종료.
     }

     while ((c = getc(ifp)) != EOF) // 입력 파일에서 한 글자씩 읽음 EOF(파일의 끝)까지.
        putc(c, ofp); // 입력 파일 문자를 그대로 씀
    
    fclose(ifp); // 입력 파일 닫기.
    fclose(ofp); // 출력 파일 닫기.

    return 0;
}