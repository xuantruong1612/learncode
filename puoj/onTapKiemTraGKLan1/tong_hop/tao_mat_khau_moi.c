#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char password[101];
    while (1) {
        scanf("%s", password);
        int has_upper = 0, has_lower = 0, has_digit = 0, has_special = 0;
        int len = strlen(password);

        // Kiểm tra độ dài hợp lệ
        if (len < 8 || len > 20) {
            printf("Mat khau yeu. Vui long nhap lai.\n");
            continue;
        }

        // Kiểm tra từng ký tự
        for (int i = 0; i < len; i++) {
            if (isupper(password[i])) has_upper = 1;
            else if (islower(password[i])) has_lower = 1;
            else if (isdigit(password[i])) has_digit = 1;
            else if (password[i] == '@' || password[i] == '#' || password[i] == '$' || password[i] == '!') has_special = 1;
        }

        if (has_upper && has_lower && has_digit && has_special) {
            printf("Mat khau hop le.\n");
            break;
        } else {
            printf("Mat khau yeu. Vui long nhap lai.\n");
        }
    }
    return 0;
}
