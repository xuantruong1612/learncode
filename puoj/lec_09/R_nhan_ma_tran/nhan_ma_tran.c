#include <stdio.h>

int main() {
    int m, n, p;
    scanf("%d %d %d", &m, &n, &p);

    int A[m][n], B[n][p], C[m][p];
    // A
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &A[i][j]);
    // B
    for (int i = 0; i < n; i++)
        for (int j = 0; j < p; j++)
            scanf("%d", &B[i][j]);
    // C
    for (int i = 0; i < m; i++)
        for (int j = 0; j < p; j++) {
            C[i][j] = 0;
            for (int k = 0; k < n; k++)
                C[i][j] += A[i][k] * B[k][j];
        }

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < p; j++)
            printf("%d ", C[i][j]);
        printf("\n");
    }

    return 0;
}
