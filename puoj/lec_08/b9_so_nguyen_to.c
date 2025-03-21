#include <stdio.h>

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

        if (so_nguyen_to(n) == 1) {
            printf("YES");
        }
        else 
            printf("NO");


    return 0;
}
