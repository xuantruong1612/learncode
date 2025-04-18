#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    if (n < 1) {
        return 0; // Không in gì cả
    }

    for (int i = 1; i <= n; i++) {
        for (int j = 0; j < i; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
