#include <stdio.h>

int main(){
    extern int x;
    printf("%d",x);
    return 0;
}

int x = 69;
