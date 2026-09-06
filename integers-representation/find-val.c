#include <limits.h>
#include <stdio.h>

int main(void) {
  int x = INT_MIN;
  int y = 4;

  unsigned ux = x;
  unsigned uy = y;

  printf("%d\n", x > 0);
  printf("%d\n", ((x-1) < 0));
  printf("%d\n", (x > 0) || (x-1 < 0));

  return 0;
}