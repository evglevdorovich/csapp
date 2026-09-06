#include <stdio.h>
#include <string.h>

int strlonger(char *s, char *t) {
    return strlen(s) > strlen(t);
}

int main(int argc, char *argv[]) {

    int result = strlonger("hello", "hello");
    printf("Result: %d\n", result);

    result = strlonger("hello", "hello1");
    printf("Result: %d\n", result);

    result = strlonger("hello1", "hello");
    printf("Result: %d\n", result);

    return 0;
}