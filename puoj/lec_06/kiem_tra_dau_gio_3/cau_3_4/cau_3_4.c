// Số nguyên tố là số chỉ chia hết cho 1 và chính nó

#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int uoc = 1;

    if (n <= 1)
        uoc = 0;
    else {
        // n có ước lớn hơn căn bậc 2 của n => có ước nhỏ hơn căn bậc 2 
        for (int i = 2; i * i <= n; i++) { // n = 36 ước là 12 => ước khác là 3
            if (n % i == 0) {
                uoc = 0;
                break;
            }
        }
    }

    if (uoc)
        printf("YES");
    else
        printf("NO");
    return 0;
}
