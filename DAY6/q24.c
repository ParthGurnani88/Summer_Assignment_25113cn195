#include <stdio.h>

// Function to calculate x^n
double power(double x, int n) {
    double result = 1.0;
    long long absN = n; // Use long long to prevent overflow if n is INT_MIN

    // Handle negative exponents
    if (absN < 0) {
        absN = -absN;
    }

    while (absN > 0) {
        // If absN is odd, multiply x with the result
        if (absN % 2 == 1) {
            result *= x;
        }
        
        // Square the base
        x *= x;
        
        // Divide the exponent by 2
        absN /= 2;
    }

    // If the original exponent was negative, return 1 / result
    return (n < 0) ? (1.0 / result) : result;
}

int main() {
    double x;
    int n;

    printf("Enter base (x): ");
    if (scanf("%lf", &x) != 1) return 1;

    printf("Enter exponent (n): ");
    if (scanf("%d", &n) != 1) return 1;

    double ans = power(x, n);
    printf("%.5f^%d = %.5f\n", x, n, ans);

    return 0;
}