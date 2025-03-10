#include <stdio.h>
int main() {
    int n, giaithua = 1;
    scanf("%d", &n);
    if (n < 0) {
        printf("sai");
        return 0;
    }
    for (int i = 1; i <= n; i++) {
        giaithua *= i;
    }
    printf("%d", giaithua);
    return 0;
}
