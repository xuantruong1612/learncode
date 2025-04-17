#include <math.h>
#include <stdio.h>

int main() {
  double a, b, c;
  scanf("%lf%lf%lf", &a, &b, &c);
  if (a == 0) {
    if (b == 0) {
      if (c == 0) {
        printf("vo so nghiem");
      } else
        printf("vo nghiem");
    } else
      printf("%.3lf", -c / b);
  } else {
    double delta = b * b - 4 * a * c;
    if (delta == 0) {
      double x = -b / (2 * a);
      printf("%.3lf %.3lf", x, x);
    } else if (delta < 0)
      printf("vo nghiem");

    else {
      double sqrt_delta = sqrt(delta);
      double x1 = (-b + sqrt_delta) / (a * 2);
      double x2 = (-b - sqrt_delta) / (2 * a);
      if (x1 > x2)
        printf("%.3lf %.3lf", x2, x1);
      else
        printf("%.3lf %.3lf", x1, x2);
    }
  }
  return 0;
}
