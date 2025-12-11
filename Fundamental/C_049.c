#include <stdio.h>

int main(){
    int i = 1;
    int pow = 1;

    while (i <= 10)
    {
        pow = pow * 2;
        
        printf("2^%d = %d \n", i, pow);
        i++;
    }
    
    return 0;
}
