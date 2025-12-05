//WAP to display the details of a structure called person(AGE,NAME) using dynamic memory allocation
#include <stdio.h>
#include <stdlib.h>

struct Person {
    int age;
    char name[50];
};

int main() {
    struct Person *p;

    p = (struct Person*) malloc(sizeof(struct Person));

    if (p == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    printf("Enter name: ");
    fgets(p->name, sizeof(p->name), stdin);

    printf("Enter age: ");
    scanf("%d", &p->age);

    printf("\n--- Person Details ---\n");
    printf("Name: %s", p->name);
    printf("Age : %d\n", p->age);

    free(p);

    return 0;
}
