//destuffing
#include <stdio.h>
#include <string.h>

int main() {
    char stuffed[100], destuffed[100];
    int i, j = 0, count = 0;

    printf("Enter Stuffed Bits: ");
    scanf("%s", stuffed);

    for (i = 0; stuffed[i] != '\0'; i++) {
        destuffed[j++] = stuffed[i];

        if (stuffed[i] == '1') {
            count++;
        } else {
            count = 0;
        }

        if (count == 5) {
            i++;        
            count = 0; 
        }
    }

    destuffed[j] = '\0'; 

    printf("Destuffed Bits: %s\n", destuffed);

    return 0;
}
