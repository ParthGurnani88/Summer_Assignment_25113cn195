#include <stdio.h>

int main() {
    int n;
    long long a = 1, b = 1, temp;

    printf("Enter n (1-indexed): ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("n must be positive.\n");
        return 1;
    }

    if (n == 1 || n == 2) {
        printf("%lld\n", a);
        return 0;
    }

    for (int i = 3; i <= n; i++) {
        temp = a + b;
        a = b;
        b = temp;
    }

    printf("%lld\n", b);
    return 0;
}