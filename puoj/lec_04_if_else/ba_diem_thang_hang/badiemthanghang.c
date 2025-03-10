#include <stdio.h>

int main() {
    int x, y, x1, y1, x2, y2;
    
    scanf("%d %d", &x, &y);
    scanf("%d %d", &x1, &y1);
    scanf("%d %d", &x2, &y2);

    if ((y1 - y) * (x2 - x1) == (y2 - y1) * (x1 - x)) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }
    
    return 0;
}
