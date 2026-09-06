#include <stdio.h>

int div16 (int x) {
    
    return (x + (15 & (x >> 31))) >> 4 ;
}

int main(void) {
    printf("%d\n", div16(17));
    printf("%d\n", div16(16));
    printf("%d\n", div16(15));
    printf("%d\n", div16(-17));
    printf("%d\n", div16(-16));
    printf("%d\n", div16(-15));

    return 0;
}