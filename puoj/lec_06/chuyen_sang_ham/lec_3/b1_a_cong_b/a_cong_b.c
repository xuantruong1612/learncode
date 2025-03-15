#include <stdio.h>

int a_cong_b(int a, int b) {
    return a + b;
}

int main() {
    int a, b;
    scanf("%d%d", &a, &b);
    int sum = a_cong_b(a, b);
    printf("%d", sum);

    return 0;
}
