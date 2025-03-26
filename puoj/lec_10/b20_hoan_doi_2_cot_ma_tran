#include <stdio.h>

int main() {
    int m, n, k, l;
    scanf("%d %d", &m, &n);
    scanf("%d %d", &k, &l);

    int a[m][n];

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    for (int i = 0; i < m; i++) {
        int temp = a[i][k - 1];
        a[i][k - 1] = a[i][l - 1];
        a[i][l - 1] = temp;
    }

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}
