#include <stdio.h>

int main() {
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    // ? == thì, : == không phải thì
    int max = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);
    /* nếu a > b so sánh tiếp a > c
    * nếu a < b so sánh b > c */ 
    printf("%d", max);

    return 0;
}
