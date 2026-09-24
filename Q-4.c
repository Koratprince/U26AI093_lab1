#include <stdio.h>

int main() {
    int fahrenheit, celsius;

    printf("Enter temperature in Fahrenheit: ");
    scanf("%d", &fahrenheit);

    // Multiply before dividing to prevent integer truncation to 0
    celsius = (fahrenheit - 32) * 5 / 9;

    printf("Temperature in Celsius = %d°C\n", celsius);
    return 0;
}
