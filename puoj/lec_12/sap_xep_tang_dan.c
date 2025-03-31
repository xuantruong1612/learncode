// Thuật toán này giống nổi bọt

#include <stdio.h>

void in(int a[], int n) {
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
}

void sapxep(int a[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[i] > a[j]){
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
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
