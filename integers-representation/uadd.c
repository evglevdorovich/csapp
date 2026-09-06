#include <stdio.h>

int uadd_ok(unsigned x, unsigned y);

int main(int argc, char* argv[]) {
    unsigned x = 0;
    unsigned y = 0;

    int result = uadd_ok(x, y);
    printf("Result: %d\n", result);

    return 0;
}

int uadd_ok(unsigned x, unsigned y) {
    return x + y >= x;
}