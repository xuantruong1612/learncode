#include <stdio.h>

int main() {
    int option;
    printf("1: Cafe den da 15k\n");
    printf("2: Cafe sua da 15k\n");
    printf("3: Kem tran trau ngu coc 15k\n");
    printf("4: Kem tran trau duong den 20k\n");
    printf("5: Tra o long dua nhiet doi 25k\n");
    printf("6: Hong tra chan vang 25k\n");
    printf("7: Hong tra dau tam thach que hoa 25k\n");
    printf("Any key: thoat\n");
    printf("What do you want to drink? ");
    scanf("%d", &option);

    switch (option) {
    case 1: case 2: case 3:
        printf("You must pay %dK\n", 15);
        break;
    case 4:
        printf("You must pay: %dK\n", 20);
        break;
    case 5: case 6: case 7:
        printf("You must pay: %dK\n", 25);
    default:
        printf("See you again\n");
        break;
    }
    return 0;
}
