#include <stdio.h>

int main() {
    while (1) {
        int n;
        printf("Nhap so duong: ");
        scanf("%d", &n);
        if (n >= 0) {
            printf("%d",n);
            break;
        }
        printf("nhap lai\n");
    }
    return 0;
}
