#include <stdio.h>

int main(){
    int i;
    char addr[10];

    printf("Enter no.: ");
    scanf("%d", &i);
    printf("Enter address: ");
    scanf("%s", addr);
    printf("\nNo: %d", i);
    printf("\nAddress is %s\n", addr);

    return 0;
}