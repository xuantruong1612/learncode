#include <stdio.h>

int main() {
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    int min = (a < b) ? ((a < c) ? a : c) : ((b < c) ? b : c);
    printf("%d", min);

    return 0;
}
