#include <stdio.h>

int main (){
    int age;
    char full_name[100];

    scanf("%d", &age);
    scanf("\n");
    fgets(full_name, 100, stdin);
    printf("%d\n", age);
    printf("%s", full_name);
    return 0;
}
