#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int playerChoice, engineChoice;

    srand(time(NULL));

    while (1) {
        printf("\n--- MENU ---\n");
        printf("1 - KEO\n");
        printf("2 - BUA\n");
        printf("3 - LA\n");
        printf("ANY OTHER KEY - EXIT\n");
        printf("Your choice: ");
        
        if (scanf("%d", &playerChoice) != 1 || playerChoice < 1 || playerChoice > 3) {
            break;
        }

        engineChoice = rand() % 3;

        char *options[] = {"KEO", "BUA", "LA"};
        printf("\nENGINE CHOICE: %s\n", options[engineChoice]);
        printf("YOUR CHOICE: %s\n", options[playerChoice - 1]);

        if ((playerChoice - 1) == engineChoice) {
            printf("RESULT: TIE\n");
        } else if ((playerChoice - 1 == 0 && engineChoice == 2) || 
                   (playerChoice - 1 == 1 && engineChoice == 0) || 
                   (playerChoice - 1 == 2 && engineChoice == 1)) {
            printf("RESULT: YOU WIN\n");
        } else {
            printf("RESULT: YOU LOSE\n");
        }
    }

    printf("Exiting game. Goodbye!\n");
    return 0;
}
