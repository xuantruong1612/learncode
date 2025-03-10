#include <math.h>
#include <stdio.h>
int main() {
  long long m, n, a;
  scanf("%lld%lld%lld", &m, &n, &a);
  //  int da_nen = ((m + a - 1) / a) * ((n + a - 1) / a);
  long long da_nen = (long long ) ceil((double)m / a) * ceil((double)n / a);
  printf("%lld", da_nen);
}
