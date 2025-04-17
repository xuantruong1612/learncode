#include <stdio.h>

int main() {
    char str[1001];
    int freq[256] = {0}; // Mảng đếm tần suất của các ký tự ASCII
    int i = 0;

    // Đọc xâu đầu vào
    fgets(str, sizeof(str), stdin);

    // Đếm tần suất các ký tự (tự cài đặt)
    while (str[i] != '\0' && str[i] != '\n') {
        freq[(unsigned char)str[i]]++;
        i++;
    }

    // Tìm ký tự có tần suất lớn nhất (ưu tiên ký tự xuất hiện đầu tiên)
    int max_freq = -1;
    char max_char;
    i = 0;

    while (str[i] != '\0' && str[i] != '\n') {
        if (freq[(unsigned char)str[i]] > max_freq) {
            max_freq = freq[(unsigned char)str[i]];
            max_char = str[i];
        }
        i++;
    }

    // In ra ký tự xuất hiện nhiều nhất
    printf("%c\n", max_char);

    return 0;
}
