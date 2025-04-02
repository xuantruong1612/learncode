#include <stdio.h>
#include <stdlib.h>

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main () {
    int a = 3;
    int b = 5;
    printf("Gia tri cac bien truoc khi doi cho la: ");
    printf ("a = %d", a);
    printf ("b = %d", b);

    printf ("Sau khi doi cho la: ");
    swap (&a, &b);
    printf ("a = %d", a);
    printf ("a = %d", a);
    return 0;
}
