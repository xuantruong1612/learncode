// Nhập 2 chữ cái a, b. In ra số các chữ đứng trước a và đứng sau b.

#include <stdio.h>
#include <stdlib.h>

int main() {
    char c1, c2;
    scanf("%c %c", &c1, &c2);
    int result = abs((c1 - 'a') - (c2 - 'a')) - 1;
    printf("%d\n", result);

    return 0;
}
