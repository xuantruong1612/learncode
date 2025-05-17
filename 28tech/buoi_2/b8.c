#include <stdio.h>

int main() {
  int n;
  scanf("%d", &n);
  int hoa_don[] = {100, 20, 10, 5, 1};
  int count = 0;

  for (int i = 0; i <= 5; i++) {
    count += n / hoa_don[i];
  n %= hoa_don[i];
}
printf("%d", count);
return 0;
}
