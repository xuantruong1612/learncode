#include <stdio.h>

int check(char s) {
    return ('a' <= s && 'z' >= s) ? 1 : 0;
}

int main() {
    char s;
    scanf("%c", &s);
    printf("%d", check(s));
    return 0;
}
