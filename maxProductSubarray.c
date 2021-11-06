#include <stdio.h>

int max(int a, int b) { return a > b ? a : b; }

int min(int a, int b) { return a < b ? a : b; }

void main() {
  int myItems[] = {-5};
  int i, result = myItems[0], minEnding = 1, maxEnding = 1,
         length = sizeof(myItems) / sizeof(myItems[0]);

  for (i = 0; i < length; i++) {
    if (myItems[i] > 0) {
      maxEnding = maxEnding * myItems[i];
      minEnding = min(minEnding * myItems[i], 1);
    } else if (myItems[i] == 0) {
      maxEnding = 1;
      minEnding = 1;
    } else {
      int temp = maxEnding;
      maxEnding = max(minEnding * myItems[i], 1);
      minEnding = temp * myItems[i];
    }

    if (result < maxEnding) {
      result = maxEnding;
    }
  }

  printf("%d", result);
}