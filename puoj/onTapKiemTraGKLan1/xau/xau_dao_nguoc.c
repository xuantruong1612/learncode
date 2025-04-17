#include <stdio.h>

int main() {
    char str[1001];  // Giả sử độ dài xâu tối đa là 1000 ký tự
    int length = 0;

    // Đọc vào cả dòng (có thể có khoảng trắng)
    fgets(str, sizeof(str), stdin);

    // Tính độ dài thực sự của xâu (loại bỏ ký tự newline nếu có)
    while (str[length] != '\0' && str[length] != '\n') {
        length++;
    }

    // In đảo ngược
    for (int i = length - 1; i >= 0; i--) {
        putchar(str[i]);
    }

    putchar('\n'); // Xuống dòng sau khi in xong

    return 0;
}
