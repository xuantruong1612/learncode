#include <stdio.h>

char strlen(char* str){
    int counter = 0;
    while (1){
        if (str[counter] == '\0')
            return counter;
        counter++;
    }
}

char* strcpy(char* dich, char* nguon){
    for (int i = 0; i < strlen(nguon); i++){
        dich[i] = nguon[i];
    }
    dich[strlen(nguon)] = '\0';
    return dich;
}

int main (){
    char fullname[50];
    char cp[] = "hehe";
    
    printf("%s\n", strcpy(fullname, cp));
    return 0;
}
