#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int chuc = n / 10;
    int don_vi = n % 10;
    printf("%d", chuc + don_vi);

    return 0;
}
