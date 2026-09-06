#include <stdio.h>
typedef unsigned char *byte_pointer;

void show_short(short val) {
  byte_pointer ptr = (byte_pointer) &val;

  printf("\n");
}


int main (void) {


    show_short(123);
    return 0;
}
