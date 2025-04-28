#include <stdio.h>

int check(char n) {
    if ((n >= 'A' && n <= 'Z') || (n >= 'a' && n <= 'z')) {
        return 1;
    }
    return 0;
}
int main() {
    char n;
    scanf("%c", &n);
    printf("%d", check(n));
    return 0;
}
