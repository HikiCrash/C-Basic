#include <stdio.h>

int main(void){
    char buf[512]; // 파일 내용을 한 줄씩 저장할 버퍼.
    FILE *ifp, *ofp;

    ifp = fopen("input.txt", "r");
    ofp = fopen("output.txt", "w");

    while (fgets(buf, 512, ifp)) // input.txt를 한 줄씩 읽어서 버퍼에 저장.
        fputs(buf, ofp); // output.txt에 그대로 출력.

    fclose(ifp);
    fclose(ofp);

    return 0;
}