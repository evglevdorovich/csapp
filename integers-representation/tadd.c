#include <stdio.h>
#include <limits.h>

int tadd_ok(int x, int y);

int main(int argc, char* argv[]) {
    int x = INT_MIN; // Minimum value for a signed integer
    int y = INT_MIN; // Minimum value for a signed integer

    int result = tadd_ok(x, y);
    printf("Expected negative overflow result: %d\n", result);

    x = INT_MAX; // Maximum value for a signed integer
    y = INT_MAX; // Maximum value for a signed integer

    printf("Expected positive overflow result: %d\n", tadd_ok(x, y));   

    x = 4;
    y = 5;

    printf("Expected no overflow result: %d\n", tadd_ok(x, y));

    return 0;
}

int tadd_ok(int x, int y) {
    int sum = x + y;
    printf("Sum: %d\n", sum);

    if (x > 0 && y > 0 && sum < 0) {
        return 0; // Positive Overflow occurred
    }

    if (x < 0 && y < 0 && sum >= 0) {
        return 0; // Negative Overflow occurred
    }

    return 1;
}
