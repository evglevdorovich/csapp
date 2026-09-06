#define POS_INFINITY 1.9e308
#define NEG_INFINITY -POS_INFINITY
#define NEG_ZERO 1 / NEG_INFINITY
#include <stdio.h>

int main(void) {
  double d = 0;
  float f = POS_INFINITY;

  printf("%d", (f+d)-f == d);

  return 0;
}