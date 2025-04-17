/* Nhập vào một só nguyên n
* Kiểm tra n có phải là số hoàn hảo không. Nếu có in "YES", không in "NO"
* Số hoàn hảo là số có tổng các ước của nó bằng chính nó ( không kể nó ) 
*/

#include <stdio.h>
#include <math.h>

int main() {
    int n, sum = 1;  // 1 luôn là ước (trừ n = 1)
    scanf("%d", &n);

    if (n <= 1) {
        printf("NO\n");
        return 0;
    }

    int sqrt_n = sqrt(n);
    for (int i = 2; i <= sqrt_n; i++) {
        if (n % i == 0) {
            sum += i;
            if (i != n / i)
                sum += n / i;
        }
    }

    if (sum == n)
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}
