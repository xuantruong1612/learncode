#include <stdio.h>

void input(int a[], int n) {
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
}

int so_nguyen_to(int n) {
    if (n < 2)
        return 0; // số nhỏ hơn 2 thì k phải
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0)
            return 0; // chia hết thì k phải
    }
    return 1; // đúng là số nguyên tố
}

int main() {
    int n;
    scanf("%d", &n);
    int a[n];
    input(a, n);

    for (int i = 0; i < n; i++) {
        if (so_nguyen_to(a[i])) {
            printf("%d ", a[i]);
        }
    }

    return 0;
}
