#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);
    int binhphuong = 0;
    /*for (int i = 1; i * i <= a; i++) {
        binhphuong++;
    }
    printf("%d\n", binhphuong);
    */

    for (int i = 1; i <= a; i++) {
        binhphuong += i * i;
    }
    printf("%d ", binhphuong);
    return 0;
}
