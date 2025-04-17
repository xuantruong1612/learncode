#include <stdio.h>

int main() {
  long long m, n;
  scanf("%lld%lld", &m, &n);
  printf("%lld %lld", 2 * (m + n), m * n);
  return 0;
}
