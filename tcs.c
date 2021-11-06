#include <stdio.h>

void main() {
  int n, temp, r = 0;
  scanf("%d", &n);

  if (n < 10 || n > 1000000) {
    printf("Wrong Input");
    return;
  }
  temp = n;
  while (temp > 0) {
    int d = temp % 10;
    if (d >= 2) {
      if (d > 3) {
        r = (r * 100) + (d * d);
      } else {
        r = (r * 10) + (d * d);
      }
    } else {
      r = (r * 10) + d;
    }
    temp /= 10;
  }

  printf("\n%d", r);
}