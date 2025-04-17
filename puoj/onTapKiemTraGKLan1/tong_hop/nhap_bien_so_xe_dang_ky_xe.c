#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main() {
    char plate[100];
    while (1) {
        scanf("%s", plate);
        int valid = 1;

        // Kiểm tra độ dài đúng 11 ký tự
        int len = strlen(plate);
        if (len != 11) {
            valid = 0;
        } else {
            // Kiểm tra XX là 2 chữ số từ 01 đến 99
            if (!isdigit(plate[0]) || !isdigit(plate[1])) valid = 0;
            else {
                int province = (plate[0] - '0') * 10 + (plate[1] - '0');
                if (province < 1 || province > 99) valid = 0;
            }

            // YY là 2 chữ cái in hoa
            if (!isupper(plate[2]) || !isupper(plate[3])) valid = 0;

            // Vị trí 4 phải là '-'
            if (plate[4] != '-') valid = 0;

            // ZZZ: 3 chữ số
            if (!isdigit(plate[5]) || !isdigit(plate[6]) || !isdigit(plate[7])) valid = 0;

            // Vị trí 8 phải là '.'
            if (plate[8] != '.') valid = 0;

            // ZZ: 2 chữ số cuối
            if (!isdigit(plate[9]) || !isdigit(plate[10])) valid = 0;
        }

        // Xuất kết quả
        if (valid) {
            printf("Bien so hop le: %s\n", plate);
            break;
        } else {
            printf("Bien so khong hop le. Vui long nhap lai.\n");
        }
    }
    return 0;
}
