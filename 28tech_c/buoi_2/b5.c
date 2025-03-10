#include <stdio.h>
#include <stdlib.h> // gia tri tuyet doi

int main() {
  int a, b, s;
  scanf("%d%d%d", &a, &b, &s);
  int buoc_max = abs(a) + abs(b);   // |a| + |b|
  /* nếu bước s nhỏ hơn thì KHÔNG thể đến được
     nếu đi quá bước thì phải bước lại cho chẵn */
  if (buoc_max <= s && (s - buoc_max) % 2 == 0)
    printf("YES");
  else
    printf("NO");
}
