#include <stdio.h>
#include <stdlib.h>

struct Salary {
    int empId;
    float basicPay;
    float hra;
    float da;
    float grossSalary;
};

void calculateSalary() {
    struct Salary s;
    printf("Enter Employee ID: ");
    scanf("%d", &s.empId);
    printf("Enter Basic Pay: ");
    scanf("%f", &s.basicPay);
    
    s.hra = s.basicPay * 0.20;
    s.da = s.basicPay * 0.50;
    s.grossSalary = s.basicPay + s.hra + s.da;
    
    FILE *fp = fopen("salary.dat", "ab+");
    if (fp == NULL) return;
    fwrite(&s, sizeof(struct Salary), 1, fp);
    fclose(fp);
    printf("Salary Calculated and Saved!\n");
}

void displaySalaries() {
    FILE *fp = fopen("salary.dat", "rb");
    struct Salary s;
    if (fp == NULL) {
        printf("No payroll records found.\n");
        return;
    }
    printf("\n--- Payroll Details ---\n");
    while (fread(&s, sizeof(struct Salary), 1, fp)) {
        printf("Emp ID: %d | Basic: %.2f | HRA: %.2f | DA: %.2f | Gross: %.2f\n",
               s.empId, s.basicPay, s.hra, s.da, s.grossSalary);
    }
    fclose(fp);
}

int main() {
    int choice;
    while (1) {
        printf("\n1. Calculate & Add Salary\n2. View Payroll\n3. Exit\nEnter choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1: calculateSalary(); break;
            case 2: displaySalaries(); break;
            case 3: exit(0);
            default: printf("Invalid Choice!\n");
        }
    }
    return 0;
}