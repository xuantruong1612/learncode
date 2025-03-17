// Trung bình cộng mảng

#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int a[n];
    

    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    int sum = 0, count = 0;

    for (int i = 0; i < n; i++) {
        if (a[i] >= 0) {
            sum += a[i];
            count++;
        }
    }

    if (count > 0) {
        double ep_kieu = (double)sum / count;
        printf("%.3f\n", ep_kieu);
    } else {
        printf("Day so khong co phan tu khong am\n");
    }

    return 0;
}
