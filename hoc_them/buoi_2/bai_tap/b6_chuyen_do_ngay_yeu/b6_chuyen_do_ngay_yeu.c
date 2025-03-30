#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int nam = n / 365;
    int ngay_con_lai = n % 365;
    int thang = ngay_con_lai / 30, ngay = ngay_con_lai % 30;
    printf("%d nam, %d thang, %d ngay", nam, thang, ngay);

    return 0;
}
