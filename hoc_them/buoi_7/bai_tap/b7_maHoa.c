#include <stdio.h>
#include <string.h>
#include <ctype.h>

void dichTrai(char* str){
    int len = strlen(str);
    if (len > 1){
        char temp = str[0];
        for (int i = 0; i < len - 1; i++){
            str[i] = str[i + 1];
        }
        str[len - 1] = temp;
    }
}
void dichPhai (char* str){
    int len = strlen(str);
    if (len > 1){
        char temp = str[len - 1];
        for (int i = len - 1; i > 0; i--){
            str[i] = str[i - 1];
        }
        str[0] = temp;
    }
}

void print(char* str){
    printf("%s\n", str);
}

int main (){
    char str[100];
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    char original_str[100];
    strcpy(original_str, str);

    dichTrai(str);
    print(str);
    
    strcpy(str, original_str);
    dichPhai(str);
    print(str);

    return 0;
}
