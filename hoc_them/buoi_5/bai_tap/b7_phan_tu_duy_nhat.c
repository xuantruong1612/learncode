#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    int count[100001] = {0};

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        count[arr[i]]++;
    }

    for (int i = 0; i < n; i++) {
        if (count[arr[i]] == 1) {
            printf("%d ", arr[i]);
        }
    }

    return 0;
}
