#include <stdio.h>

int main() {
    int age;

    // Ask the user to enter their age
    printf("Please enter your age: ");
    scanf("%d", &age);

    // Check if the age is greater than or equal to 18
    if (age >= 18) {
        printf("You are %d years old.\n", age);
        printf("You are eligible to vote.\n");
    } else {
        printf("You are %d years old.\n", age);
        printf("You are not eligible to vote.\n");
    }

    return 0;
}

