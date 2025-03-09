/* Viết chương trình tính giá trị của hàm f(x), trong đó x được xác định từ phương trình 
* ln x = n ** (1/5) (căn bậc 5 của n). Nhập n, in ra x và f(x) với 3 chữ số thập phân.
*/

#include <stdio.h>
#include <math.h>

// khai báo hàm double
double f(double x) {
    return x * sin(x * x - 1) - x * x * cos(x * x - x * x + 10) + x * tan(x + 1);
}

int main() {
    double n, x;
    printf("Nhap n: ");
    scanf("%lf", &n);

    x = exp(pow(n, 1.0 / 5)); // tìm x từ ln(x) = căn bậc 5 của n

    printf("x = %.3lf\n", x);
    printf("f(x) = %.3lf\n", f(x));

    return 0;
}
