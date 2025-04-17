#include <stdio.h>

int main() {
  int m, n, p;
  scanf("%d%d%d", &m, &n, &p);
  int A[100][100], B[100][100], C[100][100];

  for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {
      scanf("%d", &A[i][j]);
    }
  }

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < p; j++) {
      scanf("%d", &B[i][j]);
    }
  }

  for (int i = 0; i < m; i++) {
    for (int j = 0; j < p; j++) {
      C[i][j] = 0;
      for (int k = 0; k < n; k++) {
        C[i][j] += A[i][k] * B[k][j];
      }
    }
  }

  for (int i = 0; i < m; i++) {
    for (int j = 0; j < p; j++) {
      printf("%d", C[i][j]);
      if (j < p - 1)
        printf(" ");
    }
    printf("\n");
  }
  return 0;
}
