#include "stddef.h"
#include "stdio.h"
#include "stdlib.h"
#include "string.h"
#include <stdint.h>

void *copy_elements(void *ele_src[], int ele_cnt, size_t ele_size) {
  /*
   * Allocate buffer for ele_cnt objects, each of ele_size bytes
   * and copy from locations designated by ele_src
   */
  uint64_t size = ele_cnt * (uint64_t) ele_size;
  if (size != (size_t) size) {
    return NULL;
  }


  void *result = malloc(size);
  if (result == NULL)
    /* malloc failed */
    return NULL;

  void *next = result;
  int i;
  for (i = 0; i < ele_cnt; i++) {
    /* Copy object i to destination */
    memcpy(next, ele_src[i], ele_size);
    /* Move pointer to next memory region */
    next += ele_size;
  }

  return result;
}

int main(void) { return 0; }