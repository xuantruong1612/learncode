#include <stdio.h>

int main() {
  int m, n, k, l;
  scanf("%d%d%d%d", &m, &n, &k, &l);
  int a[m][n];

  for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {
      scanf("%d", &a[i][j]);
    }
  }

  for (int i = 0; i < m; i++) {
    int temp = a[i][k];
    a[i][k] = a[i][l];
    a[i][l] = temp;
  }
  for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {
      printf("%d", a[i][j]);
      if (j < n - 1)
        printf(" ");
    }
    printf("\n");
  }
  return 0;
}
