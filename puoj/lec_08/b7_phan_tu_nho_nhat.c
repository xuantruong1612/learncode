#include <stdio.h>

void input(int a[], int n) {
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
}

int nho_nhat(int a[], int n){
    int mmin = a[0];
    for (int i = 0; i < n; i++){
        if (a[i] < min)
            min = a[i];
    }
    return min;
}

int main() {
    int n;
    scanf("%d", &n);
    int a[n];
    input(a, n);

    printf("%d", nho_nhat(a, n));
    return 0;
}
