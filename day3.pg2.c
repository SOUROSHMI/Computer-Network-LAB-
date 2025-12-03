#include <stdio.h>
#include <string.h>

int main() {
    char databits[80];
    int count = 0;

   
    printf("Enter Data Bits: ");
    scanf("%s", databits);

    printf("Data Bits Before Bit Stuffing: %s\n", databits);

    printf("Data Bits After Bit Stuffing: ");

    for (int i = 0; i < strlen(databits); i++) {
        printf("%c", databits[i]);

        if (databits[i] == '1') {
            count++;
        } else {
            count = 0;  
        }

        // After five 1s, insert a 0
        if (count == 5) {
            printf("0");
            count = 0;
        }
    }

    return 0;
}
