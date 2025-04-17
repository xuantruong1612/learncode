#include <stdio.h>

int main() {
    char str[1001];      // Chuỗi đầu vào
    char result[1001];   // Chuỗi sau khi loại bỏ chữ số
    int i = 0, j = 0;

    // Đọc xâu đầu vào (có thể chứa cả khoảng trắng)
    fgets(str, sizeof(str), stdin);

    // Duyệt từng ký tự
    while (str[i] != '\0' && str[i] != '\n') {
        if (!(str[i] >= '0' && str[i] <= '9')) {
            result[j++] = str[i]; // Nếu không phải chữ số thì thêm vào kết quả
        }
        i++;
    }

    result[j] = '\0'; // Kết thúc chuỗi kết quả

    // In ra chuỗi sau khi xoá chữ số
    printf("%s\n", result);

    return 0;
}
