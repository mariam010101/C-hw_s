//Ex3: Write a C program that – Prompts the user to enter a floating-point number.– Computes and prints the square root of the number.– Rounds the number to the nearest integer and prints the result.– Calculates and prints the value of the sine of the number (in radians)

#include <stdio.h>
#include <math.h>

int main() {
    float number;

    // Prompt the user to enter a floating-point number
    printf("Enter a floating-point number: ");
    if (scanf("%f", &number) != 1) {
        printf("Invalid input. Please enter a valid floating-point number.\n");
        return 1;
    }

    // Compute and print the square root of the number
    if (number < 0) {
        printf("Square root of a negative number is not defined in the real number system.\n");
    } else {
        printf("Square root of %.2f is %.2f\n", number, sqrt(number));
    }

    // Round the number to the nearest integer and print the result
    int rounded = (int)(number + 0.5 * (number > 0 ? 1 : -1));
    printf("%.2f rounded to the nearest integer is %d\n", number, rounded);

    // Calculate and print the sine of the number (in radians)
    printf("Sine of %.2f radians is %.2f\n", number, sin(number));

    return 0;
}


