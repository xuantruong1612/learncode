#include <stdio.h>

int main() {
    int n, m;
    scanf("%d %d", &n, &m);
    int a[n], b[m], c[n + m];

    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    for (int j = 0; j < m; j++)
        scanf("%d", &b[j]);

    int i = 0, j = 0, k = 0;
    for (; i < n && j < m; ) {
        if (a[i] <= b[j])
            c[k++] = a[i++];
        else
            c[k++] = b[j++];
    }

    for (; i < n; i++)
        c[k++] = a[i];

    for (; j < m; j++)
        c[k++] = b[j];

    for (int x = 0; x < n + m; x++)
        printf("%d ", c[x]);

    return 0;
}
