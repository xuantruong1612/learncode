#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int chanle = 0;
    for (int i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            printf("%d ", i);
        } else {
            printf("%d ", -i);
        }
    }
    return 0;
}
