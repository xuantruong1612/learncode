// Đếm số chia hết

#include <stdio.h>

int main() {
    int n, m;
    scanf("%d %d", &n, &m);
    
    int chiahet = 0;
    for (int i = 1; i <= n; i++) {
        if (i % m == 0) {
            chiahet++;
        }
    }
    
    printf("%d\n", chiahet);
    
    for (int i = 1; i <= n; i++) {
        if (i % m == 0) {
            printf("%d ", i);
        }
    }
    
    return 0;
}
