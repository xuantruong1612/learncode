#include <stdio.h>

int main() {
  int n, m;
  scanf("%d%d", &n, &m);
  int min_step = (n + 1) / 2; // = ceil
  int result = ((min_step + m - 1) / m * m);
  if (result <= n) {
    printf("%d", result);
  } else {
    printf("-1\n");
  }
  return 0;
}
