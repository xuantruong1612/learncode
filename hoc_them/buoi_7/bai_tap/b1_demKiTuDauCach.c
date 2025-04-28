#include <stdio.h>
#include <string.h>

int demKyTuTrang(char* str){
    int count = 0; 
    for (int i = 0; str[i] != '\0'; i++){
        if (str[i] == ' ')
            count++;
    }
    return count;
} 

int main (){
    char str[1000];
    fgets(str, sizeof(str), stdin);
    int result = demKyTuTrang(str);
    printf("%d\n", result);

    return 0;
}
