#include <stdio.h>
#include <stdlib.h>

int main() {
    char c1, c2;
    scanf(" %c %c", &c1, &c2);

    // Tìm vị trí trong bảng chữ cái (0-indexed: 'a' = 0, ..., 'z' = 25)
    int pos1 = c1 - 'a';
    int pos2 = c2 - 'a';

    // Tính số lượng chữ cái nằm giữa
    int result = abs(pos1 - pos2) - 1;

    // In ra kết quả
    printf("%d\n", result);

    return 0;
}
