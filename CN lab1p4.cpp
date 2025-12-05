//WAP to create a structure student with details name,subject ID,age. Access the structure members using:structure variable,Pointer variable
#include <stdio.h>

struct Student {
    char name[50];
    int subjectID;
    int age;
};

int main() {
    struct Student s1;

    struct Student *ptr;

    ptr = &s1;

    printf("Enter student name: ");
    fgets(s1.name, sizeof(s1.name), stdin);

    printf("Enter subject ID: ");
    scanf("%d", &s1.subjectID);

    printf("Enter age: ");
    scanf("%d", &s1.age);

    printf("\n--- Access via Structure Variable ---\n");
    printf("Name      : %s", s1.name);
    printf("SubjectID : %d\n", s1.subjectID);
    printf("Age       : %d\n", s1.age);

    printf("\n--- Access via Pointer Variable ---\n");
    printf("Name      : %s", ptr->name);
    printf("SubjectID : %d\n", ptr->subjectID);
    printf("Age       : %d\n", ptr->age);

    return 0;
}
