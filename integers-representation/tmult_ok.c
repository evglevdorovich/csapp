
#include <stdint.h>
int main(int argc, char *argv[]) { return 0; }

int tmult_ok(int x, int y) {
  int64_t p = (int64_t) x * y;

  return p == (int) p;
}