#include <stdio.h>

int main() {
    char a;
    int n;
    scanf("%c %d", &a, &n);
    char new_char = (char)(((a - 'a' + n) % 26) + 'a');
    printf("%c\n", new_char);

    return 0;
}
