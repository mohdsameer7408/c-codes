#include <stdio.h>

int main() {
  int n, m, rev = 0;
  scanf("%d", &n);
  m = n;

  while (m != 0) {
    int d = m % 10;
    rev = (rev * 10) + d;
    m /= 10;
  }

  printf("%d", n - rev);
  return 0;
}