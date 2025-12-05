//WAP to demonstrate call by value and call by reference

#include <stdio.h>
void callByValue(int x, int y) {
    x = x + 10;
    y = y + 20;
    printf("Inside callByValue - x: %d, y: %d\n", x, y);
}

void callByReference(int *x, int *y) {
    *x = *x + 10;
    *y = *y + 20;
    printf("Inside callByReference - x: %d, y: %d\n", *x, *y);
}

int main() {
    int a = 5, b = 10;

    printf("Original values - a: %d, b: %d\n", a, b);

    callByValue(a, b);
    printf("After callByValue - a: %d, b: %d\n", a, b);

    callByReference(&a, &b);
    printf("After callByReference - a: %d, b: %d\n", a, b);

    return 0;
}
