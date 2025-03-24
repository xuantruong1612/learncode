#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int sum = 0;
    for (int i = 1; sum < n; i++) {
        sum += i * i;
        if (sum == n) {
            printf("YES");
            return 0;
        }
    }

    printf("NO");
    return 0;
}
