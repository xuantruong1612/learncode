#include <stdio.h>

int main() {
    double M;
    if (scanf("%lf", &M) != 1) {
        printf("NULL\n");
        return 0;
    }

    double sum = 0.0;
    int n = 0;

    while (sum <= M) {
        n++;
        sum += 1.0 / n;
        if (sum > 10) break; // dư thừa, nhưng đảm bảo an toàn
    }

    if (n == 1 && sum > M) {
        // trường hợp không tồn tại N
        printf("NULL\n");
    } else {
        printf("%d\n", n - 1);
    }

    return 0;
}
