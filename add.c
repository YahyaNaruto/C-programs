#include <stdio.h>

int main() {
    int num1, num2, sum;
    
    // Input the first number
    printf("Enter the first number: ");
    scanf("%d", &num1);
    
    // Input the second number
    printf("Enter the second number: ");
    scanf("%d", &num2);
    
    // Add the numbers
    sum = num1 + num2;
    
    // Display the result
    printf("The sum of %d and %d is: %d\n", num1, num2, sum);
    
    return 0;
}
