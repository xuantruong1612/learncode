#include <math.h>
#include <stdio.h>

int main() {
  float a, b, c;
  scanf("%f%f%f", &a, &b, &c);
  int dientich =(int) (4 * ((sqrt(a*b/c)) + (sqrt(a*c/b)) + (sqrt(b*c/a))));
  printf("%d", dientich);
  return 0;
}
