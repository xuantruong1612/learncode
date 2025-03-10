/* Tìm hết các số n chia hết cho 3 
*/

#include <stdio.h>

int main () {
    int n;
    scanf ("%d", &n);

    for (int i = 1; i <= n; i++){
        if (i % 3 == 0) {
            printf ("%d\n", i);
        }

    }

    return 0;
}
