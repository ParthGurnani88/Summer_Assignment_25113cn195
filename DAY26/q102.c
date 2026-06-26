#include <stdio.h>

int main() {
    int age;

    printf("=== Voting Eligibility System ===\n");
    printf("Enter your age: ");

    if (scanf("%d", &age) != 1) {
        printf("Error: Invalid input. Please enter a valid number.\n");
        return 1;
    }

    if (age < 0) {
        printf("Error: Age cannot be negative.\n");
    } else if (age >= 18) {
        printf("Status: Eligible. You are qualified to vote!\n");
    } else {
        printf("Status: Not Eligible. You must be 18 or older to vote.\n");
        printf("Years remaining: %d year(s)\n", 18 - age);
    }

    return 0;
}