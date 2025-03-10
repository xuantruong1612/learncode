 #include <stdio.h>

int main() {
  int a, b, k;
  scanf("%d %d %d", &a, &b, &k);
  int jump;
  if (k % 2 == 0) {
    jump = (k / 2) * (a - b);
  } else {
    jump = (k / 2) * (a - b) + a;
  }
  printf("frog here: %d", jump);
  return 0;
}
