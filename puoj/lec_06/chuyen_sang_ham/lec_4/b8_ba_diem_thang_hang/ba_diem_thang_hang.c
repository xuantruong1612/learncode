#include <stdio.h>

int ba_diem_thang_hang(int x, int y, int x1, int y1, int x2, int y2) {
    if ((y1 - y) * (x2 - x1) == (y2 - y1) * (x1 - x))
        return 1; // YES
    return 0;     // NO
}

int main() {
    int x, y, x1, y1, x2, y2;
    scanf("%d%d%d%d%d%d", &x, &y, &x1, &y1, &x2, &y2);

    if (ba_diem_thang_hang(x, y, x1, y1, x2, y2)) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}
