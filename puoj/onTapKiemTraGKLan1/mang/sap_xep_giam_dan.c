#include <stdio.h>

void nhap(int a[], int n) {
  for (int i = 0; i < n; i++)
    scanf("%d", &a[i]);
}

void swap(int *a, int *b) {
  int temp = *a;
  *a = *b;
  *b = temp;
}

void sapxep(int a[], int n) {
  for (int i = 0; i < n - 1; i++) {
    int max = i;
    for (int j = i + 1; j < n; j++) {
      if (a[j] > a[max]) {
        max = j;
      }
    }
    if (max != i)
      swap(&a[i], &a[max]);
  }
}

void print(int a[], int n) {
  for (int i = 0; i < n; i++) {
    printf("%d ", a[i]);
  }
  printf("\n");
}

int main() {
  int n;
  scanf("%d", &n);
  int a[n];
  nhap(a, n);
  sapxep(a, n);
  print(a, n);
}
