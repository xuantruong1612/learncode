// Vòng lặp while về số chính phương

#include <stdio.h>

int main() {
    int n, i = 1;
    scanf("%d", &n);
    int dem = 0;
    while (i * i < n) {
        dem +=1;
        printf ("%d ", i * i);
        i = i + 1;
    }
    printf("%d", dem);

    return 0;
}
