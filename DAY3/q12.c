#include <stdio.h>

int main() {
    int a, b, temp, gcd, lcm;

    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    // Save original values for LCM calculation
    int orig_a = a, orig_b = b;

    // Euclidean algorithm for GCD
    while (b != 0) {
        temp = b;
        b = a % b;
        a = temp;
    }

    gcd = a;
    lcm = (orig_a * orig_b) / gcd;

    printf("GCD = %d\n", gcd);
    printf("LCM = %d\n", lcm);

    return 0;
}
