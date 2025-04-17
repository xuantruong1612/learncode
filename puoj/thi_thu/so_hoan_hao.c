/* Nhập vào một só nguyên n
* Kiểm tra n có phải là số hoàn hảo không. Nếu có in "YES", không in "NO"
* Số hoàn hảo là số có tổng các ước của nó bằng chính nó ( không kể nó ) 
*/

#include <stdio.h>

int main() {
    unsigned long long n;
    scanf("%llu", &n);

    if (n == 0) {
        printf("NO\n");
        return 0;
    }

    unsigned long long sum = 1; // 1 luôn là ước của n > 1
    for (unsigned long long i = 2; i * i <= n; ++i) {
        if (n % i == 0) {
            sum += i;
            if (i != n / i) sum += n / i;
        }
    }

    if (n != 1 && sum == n)
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}
