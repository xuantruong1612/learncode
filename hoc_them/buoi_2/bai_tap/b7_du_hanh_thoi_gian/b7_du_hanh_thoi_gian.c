#include <stdio.h>

int main() {
    int h, m, s;
    scanf("%d%d%d", &h, &m, &s);
    int second = s * 1, minute = m * 60, hour = h * 60 * 60;
    printf("%d", second + minute + hour);

    return 0;
}
