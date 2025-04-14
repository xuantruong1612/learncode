#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int choice;
    int may;

    srand(time(NULL));
    while (1) {
        printf("\n1 - KEO\n");
        printf("2 - BUA\n");
        printf("3 - LA\n");
        printf("ANY OTHER KEY - EXIT\n");
        printf("YOUR CHOICE: ");

        if (scanf("%d", &choice) != 1 || choice < 1 || choice > 3) {
            printf("Goodbye!\n");
            break;
        }

        may = rand() % 3 + 1;

        printf("ENGINE CHOICE: ");
        if (may == 1)
            printf("KEO\n");
        else if (may == 2)
            printf("BUA\n");
        else if (may == 3)
            printf("LA\n");

        printf("YOUR CHOICE: ");
        if (choice == 1)
            printf("KEO\n");
        else if (choice == 2)
            printf("BUA\n");
        else if (choice == 3)
            printf("LA\n");

        if (choice == may) {
            printf("RESULT: TIE\n");
        } else if ((choice == 1 && may == 3) || (choice == 2 && may == 1) ||
                   (choice == 3 && may == 2)) {
            printf("RESULT: YOU WIN\n");
        } else {
            printf("RESULT: YOU LOSE\n");
        }
    }

    return 0;
}
