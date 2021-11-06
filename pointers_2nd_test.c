#include <stdio.h>

void main() {
  int i, a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  printf("Address of the array elements are :\n");
  for (i = 0; i < 10; i++) {
    printf("%d ", &a[i]);
  }
  printf("%d\n", a);
  char string[30] = "C pointer for array", *ptr;
  ptr = string;
  printf("%s", ptr);
}
