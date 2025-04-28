#include <math.h>
#include <stdio.h>

int check_ngto(int n) {
    if (n < 2)
        return 0;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0)
            return 0;
    }
    return 1;
}

int sum(int n) {
    int sum = 0;
    for (int i = 2; i <= n; i++) {
        if (check_ngto(i))
            sum += i;
    }
    return sum;
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%d", sum(n));
    return 0;
}
