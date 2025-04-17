#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>

int color = 0;

char* crush[] = {
    "* * *      * *       * * *  *     *  *      *     * * *   *     *  *      *    * *    **    *    * *",
    "*     *  *     *       *    *     *  *      *     *    *  *     *  *      *  *     *  * *   *  *",
    "*     *  *     *       *    * * * *  *      *     * * *   * * * *  *      *  *     *  *  *  *  *   * *",
    "*     *  *     *       *    *     *  *      *     *       *     *  *      *  *     *  *   * *  *     *",
    "* * *      * *         *    *     *    * *        *       *     *    * *       * *    *    **    * *"
};

char* love[] = {
	"*     *        * *    *      *  * * *     *    *    * *    *     *",
	"*     *      *     *  *      *  *          *  *   *     *  *     *",
	"*     *      *     *   *    *   * * *       *     *     *  *     *",
	"*     *      *     *    *  *    *          *      *     *  *     *",
	"*     * * *    * *       **     * * *     *         * *      * * "
};

char* tym[] = {
	"  * *   * *         * *   * *         * *   * *",
	"*     *     *     *     *     *     *     *     *",
	"*           *     *           *     *           *",
	" *         *       *         *       *         *",
	"   *     *           *     *           *     *",
	"      *                 *                 *"
};

void setcolor(int color) {
    setconsoletextattribute(getstdhandle(std_output_handle), color);
}

void show(char* text[], int n) {
	printf("\n\n\n");
    for (int i = 0; i < n; i++) {
    	setcolor(color++ % 15 + 1);
        for (int j = 0; j < strlen(text[i]); j++) {
            printf("%c", text[i][j]);
            sleep(30);
        }
        printf("\n");
    }
   	printf("\n\n\n");
}

int main() {
    show(crush, 5);
    show(tym, 6);
    show(love, 5);
    return 0;
}
