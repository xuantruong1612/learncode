#include <stdio.h>
#include <string.h>

int main() {
    char s[100];
    while (1) {
        scanf("%s", s);
        if (strcmp(s, "admin123") == 0) {
            printf("Dang nhap thanh cong.\n");
            break;
        } else {
            printf("Sai mat khau. Vui long nhap lai.\n");
        }
    }
    return 0;
}
