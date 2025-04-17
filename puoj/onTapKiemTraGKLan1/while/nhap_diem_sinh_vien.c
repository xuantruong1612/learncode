#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main() {
    char input[100];
    float diem;
    char r;

    while (1) {
        if (fgets(input, sizeof(input), stdin)) {
            // Kiểm tra có đúng 1 số thực, không có ký tự rác sau đó
            if (sscanf(input, "%f %c", &diem, &r) != 1) {
                printf("Diem khong hop le. Vui long nhap lai.\n");
                continue;
            }

            if (diem < 0 || diem > 10) {
                printf("Diem khong hop le. Vui long nhap lai.\n");
                continue;
            }

            // In ra đúng định dạng
            printf("Diem da nhap: %.2f\n", diem);
            break;
        }
    }

    return 0;
}
