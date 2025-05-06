#include <stdio.h>
#include <string.h>

struct student{
    char id[10];
    char fullname[50];
    char dob[15];
    char sex[5];
    double gpa;
};

void show(struct student student1){
    printf("id: %s\n", student1.id);
}

int main(){
    struct student student1;
    student1.gpa = 4.0;
    strcpy(student1.id, "24107720");
    strcpy(student1.fullname, "Vu Xuan Truong");
    strcpy(student1.dob, "16/12/2006");
    strcpy(student1.sex, "nam");
    
    show(student1);

    struct student student2 = student1;


    return 0;
}
