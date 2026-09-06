#include <stdio.h>

#define M 31
#define N 8

int arith(int x, int y) {
  int result = 0;
  result = x * M + y / N; /* M and N are mystery numbers. */
  return result;
}

int optarith(int x, int y) {
  int result = 0;
  result = x * M + y / N; /* M and N are mystery numbers. */
  return result;
}

int main(void) {
  printf("%d\n", arith(3, 4) == optarith(3, 4));
  printf("%d\n", arith(-3, -4) == optarith(-3, -4));
  printf("%d\n", arith(-3, 4) == optarith(-3, 4));
  printf("%d\n", arith(3, -4) == optarith(3, -4));

  return 0;
}