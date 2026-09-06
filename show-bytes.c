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

int is_little_endian() {
  unsigned int i = 1;
  unsigned char *iptr = (unsigned char *)&i;

  return iptr[0] != 0;
}

void merge_low_byte() {

  // 0x765432EF
  unsigned int x = 0x89ABCDEF;
  unsigned int y = 0x76543210;
  unsigned int z = (y & 0xFFFFFF00) | (x & 0x000000FF);

  show_int(z);
}

int main(int argc, char *argv[]) {
  int val = 12345;
  float fval = 12345.2345;
  int *pval = &val;
  char *str = "mnopqr";
  short sval = 123;
  long lval = 1234L;
  double dval = 12345.2345;

  printf("Integer value: %d\n", val);
  show_int(val);

  printf("Float value: %f\n", fval);
  show_float(fval);

  printf("Pointer value: %p\n", (void *)pval);
  show_pointer(pval);

  printf("String value: %s\n", str);
  show_bytes((byte_pointer)str, strlen(str));

  printf("double value: %f\n", dval);
  show_double(dval);

  printf("long value: %ld\n", lval);
  show_long(lval);

  printf("short value: %hd\n", sval);
  show_short(sval);

  printf("is little endian? %d\n", is_little_endian());

  merge_low_byte();

  return 0;
}