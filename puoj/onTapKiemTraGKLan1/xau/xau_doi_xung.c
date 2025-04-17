#include <stdio.h>
#include <string.h>

int is_palindrome(char str[]) {
    int length = 0;

    // Tính độ dài của xâu (thay vì dùng strlen)
    while (str[length] != '\0' && str[length] != '\n') {
        length++;
    }

    // So sánh từng cặp ký tự đối xứng
    for (int i = 0; i < length / 2; i++) {
        if (str[i] != str[length - 1 - i]) {
            return 0; // Không đối xứng
        }
    }

    return 1; // Là xâu đối xứng
}

int main() {
    int n, count = 0;
    char str[1001];

    scanf("%d", &n);
    getchar(); // Đọc bỏ ký tự newline sau số

    for (int i = 0; i < n; i++) {
        fgets(str, sizeof(str), stdin);

        if (is_palindrome(str)) {
            count++;
        }
    }

    printf("%d\n", count);

    return 0;
}
