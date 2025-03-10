#include <stdio.h>

int main() {
    int k, w, n;
    scanf("%d%d%d", &k, &n, &w);
    int thanh_toan = (k * w * (w + 1) / 2);

    // for (int i = 1; i <= w; i++) {
    //     thanh_toan += i * k;}
    int vay = thanh_toan - n;
    if (vay < 0) {
        vay = 0;
    }

    printf("%d", vay);
    return 0;
}
