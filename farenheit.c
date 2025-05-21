#include <stdio.h>

double fahrenheitToCelsius(double fahrenheit) {
    return (fahrenheit - 32) * 5.0 / 9.0;
}

int main() {
    double fahrenheit, celsius;

    printf("Enter temperature in Fahrenheit: ");
    scanf("%lf", &fahrenheit);

  
    celsius = fahrenheitToCelsius(fahrenheit);
    printf("Temperature in Celsius: %.2lf\n", celsius);

    return 0;
}