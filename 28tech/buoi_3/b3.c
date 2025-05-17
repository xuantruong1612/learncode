#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int sum = 0;
    for (int i = 3; i <= n; i += 3) {
        sum += i;
    }
    printf("%d", sum);
    return 0;
}
