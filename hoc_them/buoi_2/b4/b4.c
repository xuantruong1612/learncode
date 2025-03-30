#include <stdio.h>

int main() {
    int a = 5;
    ++a;
    int b = a++;
    printf("%d\n%d", a, b);
}
