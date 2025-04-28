// ham strlen

#include <stdio.h>

int strlen(char* str){
    int counter = 0;
    while (1){
        if(str[counter] == '\0')
            return counter;
        counter++;
    }
//    while (str[counter++] != '\0')
//        return counter - 1;
}

int main (){
    char fullname[] = "hello world!";
    int len = strlen(fullname);
    printf("%d\n", strlen(fullname));

    return 0;
}
