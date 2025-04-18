#include <stdio.h>

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    if (a <= 0 || b <= 0) {
        printf("-1");
        return 0;
    }

    int GCD = gcd(a, b);
    int LCM = (a * b) / GCD;

    printf("%d %d", GCD, LCM);
    return 0;
}
