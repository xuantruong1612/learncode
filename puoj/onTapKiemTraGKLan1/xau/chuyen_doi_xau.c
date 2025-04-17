#include <stdio.h>

int main() {
    char str[1001]; // Chuỗi đầu vào
    int i = 0;

    // Đọc chuỗi từ stdin
    fgets(str, sizeof(str), stdin);

    // Duyệt từng ký tự và chuyển đổi
    while (str[i] != '\0' && str[i] != '\n') {
        if (str[i] >= 'a' && str[i] <= 'z') {
            // Chuyển từ thường sang hoa
            str[i] = str[i] - ('a' - 'A'); // hoặc str[i] -= 32;
        } else if (str[i] >= 'A' && str[i] <= 'Z') {
            // Chuyển từ hoa sang thường
            str[i] = str[i] + ('a' - 'A'); // hoặc str[i] += 32;
        }
        // Các ký tự khác giữ nguyên
        i++;
    }

    // In kết quả
    printf("%s\n", str);

    return 0;
}
