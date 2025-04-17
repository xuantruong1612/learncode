#include <stdio.h>

void nhap(int a[], int n) {
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
}

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void sapxep(int a[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int pri = i;
        for (int j = i + 1; j < n; j++) {
            if (a[j] < a[pri]) {
                pri = j;
            }
        }
        if (a[i] != a[pri]) {
            swap(&a[i], &a[pri]);
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
    nhap(a, n);
    sapxep(a, n);
    print(a, n);
}
