#include <stdio.h>

void tim_so_tu_nhien(int n1, int n2) {
    int kq[101]; // Mảng lưu các số n thỏa mãn
    int count = 0;
    for (int n = 0; n <= 100; n++) {
        int fn = n * n - 100 * n + 1; // điều kiện bài
        if (n1 <= fn && fn <= n2) {
            kq[count++] = n;
        }
    }

    if (count > 0) {
        printf("%d\n", count);
        for (int i = 0; i < count; i++) {
            printf("%d ", kq[i]);
        }
        printf("\n");
    } else {
        printf("vo nghiem\n");
    }
}

int main() {
    int n1, n2;
    scanf("%d %d", &n1, &n2);
    tim_so_tu_nhien(n1, n2);
    return 0;
}
