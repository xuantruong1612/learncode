#include <stdio.h>

int main() {
    int n, x, xuat_hien[2000001] = {0}, min = 1000000, max = -1000000;
    scanf("%d", &n);

    // Đọc dữ liệu và đếm số lần xuất hiện
    for (int i = 0; i < n; i++) {
        scanf("%d", &x);
        xuat_hien[x + 1000000]++; // Dịch giá trị về index dương
        if (x < min)
            min = x;
        if (x > max)
            max = x;
    }

    int m = 0;
    for (int i = min; i <= max; i++) {
        if (xuat_hien[i + 1000000] > 0)
            m++;
    }
    printf("%d\n", m);

    for (int i = min; i <= max; i++) {
        if (xuat_hien[i + 1000000] > 0) {
            printf("%d %d\n", i, xuat_hien[i + 1000000]);
        }
    }

    return 0;
}
