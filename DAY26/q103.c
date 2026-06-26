#include <stdio.h>

int main() {
    int choice;
    float balance = 1000.00; // Starting balance
    float amount;

    while (1) {
        printf("\n======= ATM SIMULATION =======\n");
        printf("1. Check Balance\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Exit\n");
        printf("==============================\n");
        printf("Enter your choice (1-4): ");

        if (scanf("%d", &choice) != 1) {
            printf("Invalid selection! Please enter a number.\n");
            while (getchar() != '\n'); 
            continue;
        }

        switch (choice) {
            case 1:
                printf("\nYour current balance is: $%.2f\n", balance);
                break;

            case 2:
                printf("\nEnter deposit amount: $");
                if (scanf("%f", &amount) != 1 || amount <= 0) {
                    printf("Invalid amount!\n");
                    while (getchar() != '\n');
                } else {
                    balance += amount;
                    printf("Successfully deposited $%.2f. New balance: $%.2f\n", amount, balance);
                }
                break;

            case 3:
                printf("\nEnter withdrawal amount: $");
                if (scanf("%f", &amount) != 1 || amount <= 0) {
                    printf("Invalid amount!\n");
                    while (getchar() != '\n');
                } else if (amount > balance) {
                    printf("Insufficient balance! Your current balance is $%.2f\n", balance);
                } else {
                    balance -= amount;
                    printf("Successfully withdrew $%.2f. New balance: $%.2f\n", amount, balance);
                }
                break;

            case 4:
                printf("\nThank you for using our ATM. Goodbye!\n");
                return 0;

            default:
                printf("\nInvalid choice! Please select an option between 1 and 4.\n");
        }
    }

    return 0;
}
