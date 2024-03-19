#include <stdio.h>

void swap(int *a, int *b) {
  int temp = *a;
  *a = *b;
  *b = temp;
}

int main() {
  int n;
  scanf("%d", &n);

  int cards[n];
  for (int i = 0; i < n; i++) {
    char c;
    scanf(" %c", &c);
    if (c >= '0' && c <= '9') {
      cards[i] = c - '0';
    } else {
      cards[i] = 10 + (c - 'J');
    }
  }

  int swaps = 0;
  for (int i = 0; i < n - 1; i++) {
    for (int j = i + 1; j < n; j++) {
      if (cards[i] > cards[j]) {
        swaps++;

        swap(&cards[i], &cards[j]);
      }
    }
  }

  printf("%d\n", swaps);

  return 0;
}