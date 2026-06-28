#include <stdio.h>
#include <stdlib.h>

struct Account {
    int accNo;
    char holderName[50];
    float balance;
};

void createAccount() {
    FILE *fp = fopen("bank.dat", "ab+");
    struct Account a;
    if (fp == NULL) return;
    printf("Enter Account Number: ");
    scanf("%d", &a.accNo);
    printf("Enter Account Holder Name: ");
    scanf(" %[^\n]s", a.holderName);
    printf("Enter Initial Deposit: ");
    scanf("%f", &a.balance);
    fwrite(&a, sizeof(struct Account), 1, fp);
    fclose(fp);
    printf("Account Created Successfully!\n");
}

void checkBalance() {
    FILE *fp = fopen("bank.dat", "rb");
    struct Account a;
    int searchNo, found = 0;
    if (fp == NULL) {
        printf("No accounts found.\n");
        return;
    }
    printf("Enter Account Number to Check: ");
    scanf("%d", &searchNo);
    while (fread(&a, sizeof(struct Account), 1, fp)) {
        if (a.accNo == searchNo) {
            printf("\nAccount Holder: %s\nBalance: %.2f\n", a.holderName, a.balance);
            found = 1;
            break;
        }
    }
    if (!found) printf("Account not found.\n");
    fclose(fp);
}

int main() {
    int choice;
    while (1) {
        printf("\n1. Create Account\n2. Check Balance\n3. Exit\nEnter choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1: createAccount(); break;
            case 2: checkBalance(); break;
            case 3: exit(0);
            default: printf("Invalid Choice!\n");
        }
    }
    return 0;
}