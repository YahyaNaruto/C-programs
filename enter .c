#include <stdio.h>

int main() {
    int num;
    float fnum;
    printf("Enter an integer and a floating-point number: ");
    scanf("%d %f", &num, &fnum);
    printf("You entered %d and %f\n", num, fnum);
    return 0;
}
