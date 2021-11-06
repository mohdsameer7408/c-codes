#include <stdio.h>

int main(int argc, char const *argv[]) {
  int a = 1,

      b = 2,

      c = 3,

      d = 4,

      n = 1;

  while (n <= 5) {
    c = a * c;

    d = a * d;

    printf("%d", d);
    n = n + 1;
  }
  return 0;
}
