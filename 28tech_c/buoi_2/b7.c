#include <stdio.h>

int main() {
  int n, s;
  scanf("%d%d", &n, &s);
  int count = s / n;
  if (s % n != 0) {
    count += 1;
  }
  printf("%d", count);
  return 0;
}
