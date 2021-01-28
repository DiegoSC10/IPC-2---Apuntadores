#include <stdio.h>

int main(void) {
  float *ptr_float;
  printf("El valor apuntado por ptr_Float es  %f", *ptr_float);
  *ptr_float = 35;
  return 0;
}