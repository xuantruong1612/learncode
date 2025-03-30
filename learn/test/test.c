#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int nam = n / 365;
    int du = n % 365;
    int ngay = 30 % n;
    printf("%d nam", ngay);
    }
