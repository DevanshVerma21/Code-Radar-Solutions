#include <stdio.h>

void decimal_to_binary(int num) {
    // Array to hold binary digits (max 32 bits for a 32-bit integer)
    int binary[32];
    int index = 0;

    // Handle the case when the number is 0
    if (num == 0) {
        printf("0");
        return;
    }

    // Convert the number to binary
    while (num > 0) {
        // Store the remainder when divided by 2 (either 0 or 1)
        binary[index] = num % 2;
        // Divide the number by 2 for the next bit
        num = num / 2;
        // Move to the next index
        index++;
    }

    // Print the binary number in reverse order
    printf("Binary representation: ");
    for (int i = index - 1; i >= 0; i--) {
        printf("%d", binary[i]);  // Print each digit in reverse order
    }
    printf("\n");
}

int main() {
    int num;

    // Ask the user for input
    scanf("%d", &num);

    // Convert and print the binary representation
    printf("%d",decimal_to_binary(num));


    return 0;
}
