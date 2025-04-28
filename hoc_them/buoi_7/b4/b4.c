#include <stdio.h>

int str_len(const char *str) {
    int len = 0;
    while (str[len] != '\0') {
        len++;
    }
    return len;
}

int main() {
    char str[100];

    printf("Nhập chuỗi: ");
    fgets(str, sizeof(str), stdin); // Nhập chuỗi từ người dùng

    // Kiểm tra và loại bỏ ký tự dòng mới '\n' nếu có
    int len = str_len(str);
    if (str[len - 1] == '\n') {
        str[len - 1] = '\0'; // Thay ký tự '\n' bằng '\0' nếu có
    }

    // In độ dài của chuỗi
    printf("Độ dài của chuỗi là: %d\n", str_len(str));

    return 0;
}
