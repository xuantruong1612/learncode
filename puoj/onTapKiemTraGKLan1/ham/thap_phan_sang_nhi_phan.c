#include <stdio.h>

// Hàm in nhị phân của một số nguyên dương
void in_nhi_phan(int n) {
  if (n == 0) {
    printf("0\n");
    return;
  }

  int b[32], i = 0;

  while (n > 0) {
    b[i++] = n % 2;
    n /= 2;
  }

  // In ra theo thứ tự ngược lại
  for (int j = i - 1; j >= 0; j--) {
    printf("%d", b[j]);
  }
  printf("\n");
}

int main() {
  int n;
  scanf("%d", &n);
  int x;

  for (int i = 0; i < n; i++) {
    scanf("%d", &x);
    in_nhi_phan(x);
  }

  return 0;
}
