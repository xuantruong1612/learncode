#include <stdio.h>
#include <math.h>

int check_ngto(int n) {
    if (n < 2) return 0;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%d\n", check_ngto(n));
    return 0;
}
