#include <stdio.h>

void tong_day(int n) {
    int count = 0;
    for (int i = 1; i <= n; i++) {
        count += i;
        if (count == n) {
            printf("YES");
            return;
        }
    }
    printf("NO");
}

int main() {
    int n;
    scanf("%d", &n);
    tong_day(n);
}
