//WAP to demonstrate  the structure and access their member by creating a structure to hold student details like name,roll,state,age
#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    char state[50];
    int age;
};

int main() {
    struct Student s1;

    printf("Enter student name: ");
    fgets(s1.name, sizeof(s1.name), stdin); 

    printf("Enter roll number: ");
    scanf("%d", &s1.roll);

    while (getchar() != '\n');

    printf("Enter state: ");
    fgets(s1.state, sizeof(s1.state), stdin);

    printf("Enter age: ");
    scanf("%d", &s1.age);

    printf("\n--- Student Details ---\n");
    printf("Name  : %s", s1.name);
    printf("Roll  : %d\n", s1.roll);
    printf("State : %s", s1.state);
    printf("Age   : %d\n", s1.age);

    return 0;
}
