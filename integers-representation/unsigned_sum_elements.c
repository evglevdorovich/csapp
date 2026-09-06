#include <stdio.h>

float sum_elements(float a[], unsigned length);

int main(int argc, char *argv[]) {
    unsigned i = 0;

    float result = sum_elements((float[]){1.0, 2.0, 3.0, 4.0, 5.0}, 0);

    printf("Sum of array elements: %f\n", result);
    return 0;
}

float sum_elements(float a[], unsigned length) {
    int i;
    float result;

    for (i = 0; i < length; i++) {
        printf("Adding element %d: %f\n", i, a[i]);
        result += a[i];
    }

    return result;
}