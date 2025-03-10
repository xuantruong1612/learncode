#include <stdio.h>
int main() {
    float n;
    scanf("%f", &n);
    float sum = 0.0;
    for (int i = 0; i <= n; i++){
        sum += i;
    }
    printf ("%.3f", sum);
    return 0;
}
