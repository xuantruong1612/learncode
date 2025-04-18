#include <stdio.h>

int main() {
    unsigned long long n;

    do {
        scanf("%llu", &n);
    } while (n > 9999999999999999999LLU);

    if (n == 0) {
        printf("1");
        return 0;
    }

    int count = 0;
    while (n > 0) {
        count++;
        n /= 10;
    }

    printf("%d", count);
    return 0;
}
