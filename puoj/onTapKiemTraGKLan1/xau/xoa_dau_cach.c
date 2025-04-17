#include <stdio.h>

int main() {
    char input[1001];  // Độ dài tối đa giả sử là 1000 ký tự
    char output[1001];
    int i = 0, j = 0;

    // Đọc cả dòng kể cả khoảng trắng
    fgets(input, sizeof(input), stdin);

    // Duyệt từng ký tự và loại bỏ dấu cách
    while (input[i] != '\0') {
        if (input[i] != ' ' && input[i] != '\n') { // Bỏ dấu cách và ký tự newline
            output[j++] = input[i];
        }
        i++;
    }
    output[j] = '\0'; // Kết thúc chuỗi

    printf("%s\n", output);

    return 0;
}
