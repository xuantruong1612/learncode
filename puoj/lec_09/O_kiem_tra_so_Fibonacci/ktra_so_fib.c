#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    // Tạo danh sách các số Fibonacci 1 đến 30
    int fib[] = {1, 1, 2, 3, 5, 8, 13, 21, 34}; // tính tới 30
    int size = sizeof(fib) / sizeof(fib[0]);

    for (int i = 0; i < size; i++) {
        if (fib[i] == n) {
            printf("YES\n");
            return 0;
        }
    }
    printf("NO\n");
    return 0;
}
