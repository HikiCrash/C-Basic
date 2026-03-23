#include <stdio.h>

int main(int argc, char *argv[]){
    FILE *fp; int c;

    if (argc != 2){ // 프로그램 이름 + 파일 이름 총 2개가 아니면.
        printf("파일명이 없습니다. \n");
        return 1;
    }
    
    if ((fp = fopen(argv[1], "r")) == NULL){ // 입력 받은 파일을 읽기 모드.
        printf("파일명이 없습니다. \n");
        return 1;        
    }

    while ((c = getc(fp)) != EOF) // 파일에서 한 문자씩 읽어오기.
        putchar(c); // 읽은 문자 화면에 출력.
    
    fclose(fp);

    return 0;
}