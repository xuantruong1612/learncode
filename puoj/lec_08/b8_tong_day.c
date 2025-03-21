#include <stdio.h>

void check_sum(int n) {
    int sum = 0;
    for (int i = 1; sum < n; i++) {
        sum += i;
        if (sum == n) {
            printf("YES\n");
            return;
        }
    }
    
    printf("NO\n");
}

int main() {
    int n;
    scanf("%d", &n);
    check_sum(n);
    return 0;
}
