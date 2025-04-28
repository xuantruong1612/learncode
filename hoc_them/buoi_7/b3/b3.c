#include <stdio.h>

int hoa(char n) {
    return (n >= 'a' && n <= 'z') ? n - 32 : n; // Trả về n - 32 nếu là chữ thường, nếu không thì trả về n.
}

int thuong(char n) {
    return (n >= 'A' && n <= 'Z') ? n + 32 : n; // Trả về n + 32 nếu là chữ hoa, nếu không thì trả về n.
}

int main() {
    char n;
    scanf("%c", &n);

    if (n >= 'a' && n <= 'z') {
        printf("%c", hoa(n));
    } else if (n >= 'A' && n <= 'Z') {
        printf("%c", thuong(n));
    } else {
        printf("%c", n);
    }

    return 0;
}
