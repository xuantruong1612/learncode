#include <stdio.h>

void input(int a[], int n) {
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
}

int lon_nhat(int a[], int n){
    int max = a[0];
    for (int i = 0; i < n; i++){
        if (a[i] > max)
            max = a[i];
    }
    return max;
}

int main() {
    int n;
    scanf("%d", &n);
    int a[n];
    input(a, n);

    printf("%d", lon_nhat(a, n));
    return 0;
}
