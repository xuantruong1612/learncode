/* Cho xâu ký tự n. Hãy kiểm tra xem các xâu trên
* có 10 ký tự toàn các chữ số hay không?
* input:
* 3
* 1233111187
* 2321133311
* 123231113a
* output:
* YES
* YES
* NO
*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    int n;
    scanf("%d", &n);
    char s[101];

    for (int i = 0; i < n; ++i) {
        scanf("%s", s);
        int len = strlen(s);
        int is_digit = 1;

        if (len != 10) {
            printf("NO\n");
            continue;
        }

        for (int j = 0; j < 10; ++j) {
            if (!isdigit(s[j])) {
                is_digit = 0;
                break;
            }
        }

        if (is_digit)
            printf("YES\n");
        else
            printf("NO\n");
    }

    return 0;
}
