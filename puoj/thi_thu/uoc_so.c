#include <stdio.h>

void uoc(int n) {
  for (int i = 1; i <= n; i++) {
    if (n % i == 0)
      printf("%d ", i);
  }
}

int main() {
  int n;
  scanf("%d", &n);
  uoc(n);
  return 0;
}
