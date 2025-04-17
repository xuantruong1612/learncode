#include <stdio.h>
#include <string.h>
#include <ctype.h>

int is_valid(char s[]) {
    if (strlen(s) != 10 || s[0] != '0') return 0;
    for (int i = 0; i < 10; ++i) {
        if (!isdigit(s[i])) return 0;
    }
    return 1;
}

int main() {
    char s[100];

    while (1) {
        scanf("%s", s);
        if (is_valid(s)) {
            printf("So dien thoai hop le: %s\n", s);
            break;
        } else {
            printf("So dien thoai khong hop le. Vui long nhap lai.\n");
        }
    }

    return 0;
}
