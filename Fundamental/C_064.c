#include <stdio.h>

int fac(int);

int main(){
    int i = 5;
    printf("%d! = %d \n", i, fac(i));

    return 0;
}

int fac(int n){
    if (n <= 1)
        return(1);
    else
        return(n * fac(n - 1));
}