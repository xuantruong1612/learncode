#include <stdio.h>

void in(int a[], int n) {
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
}

void doicho(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void sapxep(int a[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int maxIdx = i;
        for (int j = i + 1; j < n; j++) {
            if (a[j] > a[maxIdx]) {
                maxIdx = j;
            }
        }
        if (maxIdx != i) {
            doicho(&a[i], &a[maxIdx]);
        }
    }
}

void print(int a[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
}

int main() {
    int n;
    scanf("%d", &n);
    int a[n];
    in(a, n);
    sapxep(a, n);
    print(a, n);
    return 0;
}
