#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Employee {
    int id;
    char name[50];
    char designation[30];
};

void addEmployee() {
    FILE *fp = fopen("employees.dat", "ab+");
    struct Employee e;
    if (fp == NULL) return;
    printf("Enter Employee ID: ");
    scanf("%d", &e.id);
    printf("Enter Name: ");
    scanf(" %[^\n]s", e.name);
    printf("Enter Designation: ");
    scanf(" %[^\n]s", e.designation);
    fwrite(&e, sizeof(struct Employee), 1, fp);
    fclose(fp);
    printf("Employee Record Added!\n");
}

void displayEmployees() {
    FILE *fp = fopen("employees.dat", "rb");
    struct Employee e;
    if (fp == NULL) {
        printf("No records found.\n");
        return;
    }
    printf("\n--- Employee List ---\n");
    while (fread(&e, sizeof(struct Employee), 1, fp)) {
        printf("ID: %d | Name: %s | Designation: %s\n", e.id, e.name, e.designation);
    }
    fclose(fp);
}

int main() {
    int choice;
    while (1) {
        printf("\n1. Add Employee\n2. Display Employees\n3. Exit\nEnter choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1: addEmployee(); break;
            case 2: displayEmployees(); break;
            case 3: exit(0);
            default: printf("Invalid Choice!\n");
        }
    }
    return 0;
}