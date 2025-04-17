#include <stdio.h>

int main() {
    char ch;
    scanf(" %c", &ch);  // dấu cách trước %c để bỏ qua ký tự newline

    if (ch == 'z') {
        printf("a\n");
    } else {
        printf("%c\n", ch + 1);
    }

    return 0;
}
