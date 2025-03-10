// Tổng số chia hết

#include <stdio.h>

int main() {
    int n, m;
    scanf("%d %d", &n, &m);
    
    //int chiahet = 0;
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        if (i % m == 0) {
            //chiahet++;
            sum += i;
        }
    }
    
    //printf("%d\n", chiahet);
    printf("%d\n", sum);
    
    return 0;
}
