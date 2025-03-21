#include <stdio.h>

int day_so_2(int n) {
    if (n == 0) {
        return 1;
    }
    if (n == 1) {
        return 2;
    }

    int a = 1, b = 2, c;
    for (int i = 2; i <= n; i++) {
        c = 2 * b - a;
        a = b;
        b = c;
    }
    return b;
}

int main() {
    int n;
    scanf("%d", &n);

    printf("%d", day_so_2(n));
    return 0;
}
