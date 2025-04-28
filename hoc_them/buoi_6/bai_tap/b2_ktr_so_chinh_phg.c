#include <math.h>
#include <stdio.h>

int check_cp(int n) {
    if (n < 0)
        return 0; // Số âm không thể là số chính phương

    int sqrt_n = (int)sqrt((double)n); // Ép kiểu cho an toàn
    if (sqrt_n * sqrt_n == n)
        return 1; // Là số chính phương
    return 0;     // Không phải
}

int main() {
    int n;
    printf("Nhập số nguyên n: ");
    scanf("%d", &n);

    if (check_cp(n))
        printf("%d là số chính phương.\n", n);
    else
        printf("%d không phải là số chính phương.\n", n);

    return 0;
}
