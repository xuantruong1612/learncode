// Đếm số ký tự viết hoa và ký tự viết thường

#include <stdio.h>
#include <ctype.h>

int main() {
    char str[1001];
    int upper_count = 0, lower_count = 0;
    scanf("%s", str);

    for (int i = 0; str[i] != '\0'; i++) {
        if (isupper(str[i])) {
            upper_count++;
        } else if (islower(str[i])) {
            lower_count++;
        }
    }

    printf("%d %d\n", upper_count, lower_count);

    return 0;
}
