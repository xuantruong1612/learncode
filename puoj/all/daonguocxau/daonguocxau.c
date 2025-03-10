#include <stdio.h>
#include <string.h>

int main() {
    char z[101]; // 100 ki tu và 1 null
    scanf("%100s", z);
    int n = strlen(z); // do dai chuoi (khong tinh \0)

    for (int i = n - 1; i >= 0; i--) // xet tu cuoi ve dau
        printf("%c", z[i]);

    printf("\n");
    return 0;
}
