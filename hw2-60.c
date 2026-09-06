#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

typedef unsigned char *byte_pointer;

void show_bytes(byte_pointer start, size_t len) {
  int i;
  for (i = 0; i < len; i++)
    printf(" %.2x", start[i]);
  printf("\n");
}

void show_int(int x) { show_bytes((byte_pointer)&x, sizeof(int)); }

void show_float(float x) { show_bytes((byte_pointer)&x, sizeof(float)); }

void show_pointer(void *x) { show_bytes((byte_pointer)&x, sizeof(void *)); }

void show_short(short val) { show_bytes((byte_pointer)&val, sizeof(short)); }

void show_long(long val) { show_bytes((byte_pointer)&val, sizeof(long)); }

void show_double(double val) { show_bytes((byte_pointer)&val, sizeof(double)); }

unsigned replace_byte(unsigned x, int i, unsigned char b) {
  unsigned shift = 0xFFu;

  unsigned mask1 = shift << ((i * 8));

  show_int(mask1);

  unsigned mask2 = ~mask1;

  show_int(mask2);

  unsigned temp = mask2 & x;

  show_int(temp);

  unsigned fullB = ((unsigned)b) << (i * 8);

  show_int(fullB);

  unsigned result = fullB | temp;

  show_int(result);

  return result;
}

int main(int argc, char *argv[]) {
  replace_byte(0x12345678, 0, 0xAB);
  printf("------------------------\n");
  replace_byte(0x12345678, 1, 0xAB);
  printf("------------------------\n");
  replace_byte(0x12345678, 2, 0xAB);
  printf("------------------------\n");

  replace_byte(0x12345678, 3, 0xAB);
  printf("------------------------\n");

  return 0;
}