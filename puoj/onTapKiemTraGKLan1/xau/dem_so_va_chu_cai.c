#include <stdio.h>
#include <ctype.h>

int main() {
    int letters = 0, digits = 0;
    int c;

    // Đọc từng ký tự cho đến khi EOF (kết thúc input)
    while ((c = getchar()) != EOF) {
        if (isalpha(c)) {
            letters++;
        } else if (isdigit(c)) {
            digits++;
        }
    }

    printf("%d %d\n", letters, digits);
    return 0;
}
