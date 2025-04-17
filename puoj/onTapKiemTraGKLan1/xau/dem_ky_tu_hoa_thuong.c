#include <stdio.h>
#include <ctype.h>  // Thư viện để kiểm tra ký tự

int main() {
    char s[1001]; // Xâu tối đa 1000 ký tự + 1 ký tự kết thúc chuỗi
    int upper = 0, lower = 0;

    // Nhập xâu (không chứa dấu xuống dòng)
    scanf("%1000s", s);

    // Duyệt từng ký tự trong chuỗi
    for (int i = 0; s[i] != '\0'; i++) {
        if (isupper(s[i])) upper++;
        else if (islower(s[i])) lower++;
    }

    // In kết quả
    printf("%d %d\n", upper, lower);

    return 0;
}
