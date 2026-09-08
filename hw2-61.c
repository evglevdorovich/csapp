#include <stdio.h>

int any_of_bit_one(int x);
int any_of_bit_zero(int x);
int least_byte_has_bit_one(int x);
int most_byte_has_bit_zero(int x);

int main(void) {
  printf("any of bit one = %d\n", any_of_bit_one(1));
  printf("any of bit zero = %d\n", any_of_bit_zero(4));

  printf("least_byte_has_bit_one %d\n", least_byte_has_bit_one(0xFF000000));

  printf("most_byte_has_bit_zero %d\n", most_byte_has_bit_zero(0xEE000000));

  return 0;
}

int any_of_bit_one(int x) { return !!x; }

int any_of_bit_zero(int x) { return !!(~x); }

int least_byte_has_bit_one(int x) { return !!(x & 0xFF); }

int most_byte_has_bit_zero(int x) {
  int shift = (sizeof(int) - 1) << 3;

  int shifted = x >> shift;

  return !!((~(shifted)) & 0xFF);
}