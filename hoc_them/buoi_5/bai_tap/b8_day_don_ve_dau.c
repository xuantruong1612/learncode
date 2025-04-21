#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    int vi_tri_so_khac_0 = 0;
    for (int i = 0; i < n; i++) {

        if (a[i] != 0) {
            int temp = a[i];
            a[i] = a[vi_tri_so_khac_0];
            a[vi_tri_so_khac_0] = temp;
            vi_tri_so_khac_0++;
        }
    }

    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}
