// Tính tổng 1/n

#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    double sum = 0.0;
    
    for (int i = 1; i <= n; i++) {
        sum += 1.0 / i;
    }

    printf("%.3f\n", sum);
    return 0;
}
