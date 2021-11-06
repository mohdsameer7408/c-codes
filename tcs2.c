#include <stdio.h>

void main() {
  int n, i, sum = 0;
  scanf("%d", &n);

  int arr[n];
  for (i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
  }

  if (arr[0] != 30) {
    printf("Transaction Failed at start");
    return;
  } else {
    sum += arr[0];
  }
  i = 1;
  while (i < n) {
    if (arr[i] != 30 && arr[i] != 60 && arr[i] != 120) {
      printf("Transaction Failed mid %d", i);
      return;
    }
    sum += 30;
    int amountToSub = arr[i] - 30;

    if ((sum - amountToSub) >= 0) {
      sum -= amountToSub;
    } else {
      printf("Transaction Failed end");
      return;
    }
    i++;
  }

  printf("Transaction Successful");
}