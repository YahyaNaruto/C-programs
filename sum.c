#include <stdio.h>

int main() {
    double num1, num2, sum;

    // Ask the user to enter the first number
    printf("Enter the first number: ");
    scanf("%lf", &num1);

    // Ask the user to enter the second number
    printf("Enter the second number: ");
    scanf("%lf", &num2);

    // Calculate the sum
    sum = num1 + num2;

    // Display the result
    printf("The sum of %.2lf and %.2lf is %.2lf\", num1, num2, sum);

    return 0;
}

