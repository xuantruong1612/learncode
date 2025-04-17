#include <stdio.h>
#include <string.h>

int nhi_phan(char s[]) {
    int result = 0;
    int len = strlen(s);
    for (int i = 0; i < len; i++) {
        result = result * 2 + (s[i] - '0');
    }
    return result;
}

int main() {
    int n;
    scanf("%d", &n);
    char s[100];

    for (int i = 0; i < n; i++) {
        scanf("%s", s);
        printf("%d\n", nhi_phan(s));
    }
}
