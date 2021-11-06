#include <stdio.h>

int add(int a, int b) { return a + b; }

void main() {
  int myArray[2][3] = {{1, 2, 3}, {4, 5, 6}};
  printf("%d\n", *(*(myArray + 1) + 1));
  int (*p)(int, int);
  p = add;
  printf("%d", p(2, 4));
}