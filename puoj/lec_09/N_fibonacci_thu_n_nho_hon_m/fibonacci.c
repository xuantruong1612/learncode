#include <stdio.h>

int find_fib(int m) {
    int a = 1, b = 1, n = 2;

    while (b <= m) {
        int c = a + b;
        a = b;
        b = c;
        n++;
    }

    return n - 1;
}

int main() {
    int m;
    scanf("%d", &m);

    printf("%d", find_fib(m));

    return 0;
}
