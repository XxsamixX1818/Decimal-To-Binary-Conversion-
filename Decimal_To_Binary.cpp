#include <stdio.h>

// A function to print the binary representation of a decimal number
void print_binary(int n) {
    // An array to store the binary digits
    int binary[32];
    // A variable to keep track of the index of the array
    int index = 0;
    // A loop to extract the binary digits from the number
    while (n > 0) {
        // Store the remainder of n divided by 2 in the array
        binary[index] = n % 2;
        // Update n to be half of its previous value
        n = n / 2;
        // Increment the index
        index++;
    }
    // A loop to print the binary digits in reverse order
    for (int i = index - 1; i >= 0; i--) {
        printf("%d", binary[i]);
    }
    // Print a new line
    printf("\n");
}

// A main function to test the print_binary function
int main() {
    // Declare a variable to store the user input
    int input;
    // Prompt the user to enter a number
    printf("Please enter a number: ");
    // Read the user input
    scanf_s("%d", &input);
    // Print the decimal number
    printf("The binary of %d is: ", input);
    // Call the print_binary function
    print_binary(input);
    // Return 0 to indicate successful execution
    return 0;
}
