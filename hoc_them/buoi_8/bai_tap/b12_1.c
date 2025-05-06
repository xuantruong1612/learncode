#include <stdio.h>

void nhap(int n, int a[]) {
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
}

void countEven(int n, int a[]) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] % 2 == 0) {
            count++;
        }
    }
    printf("%d", count);
}

void printCountEven(int n, int a[]) {
    for (int i = 0; i < n; i++) {
        if (a[i] % 2 == 0) {
            printf("%d ", a[i]);
        }
    }
}

int main() {
    int n;
    scanf("%d", &n);
    int a[n];
    nhap(n, a);
    countEven(n, a);
    printCountEven(n, a);

    return 0;
}
