#include <stdio.h>
#include <stdlib.h>

struct Marksheet {
    int roll;
    char name[50];
    float math;
    float science;
    float english;
    float total;
    float percentage;
};

void generateMarksheet() {
    struct Marksheet m;
    printf("Enter Roll Number: ");
    scanf("%d", &m.roll);
    printf("Enter Student Name: ");
    scanf(" %[^\n]s", m.name);
    printf("Enter Mathematics Marks: ");
    scanf("%f", &m.math);
    printf("Enter Science Marks: ");
    scanf("%f", &m.science);
    printf("Enter English Marks: ");
    scanf("%f", &m.english);
    
    m.total = m.math + m.science + m.english;
    m.percentage = m.total / 3.0;
    
    printf("\n=============================\n");
    printf("          MARKSHEET          \n");
    printf("=============================\n");
    printf("Roll No: %d\n", m.roll);
    printf("Name   : %s\n", m.name);
    printf("-----------------------------\n");
    printf("Maths  : %.2f\n", m.math);
    printf("Science: %.2f\n", m.science);
    printf("English: %.2f\n", m.english);
    printf("-----------------------------\n");
    printf("Total  : %.2f | Percentage: %.2f%%\n", m.total, m.percentage);
    printf("Result : %s\n", (m.percentage >= 40) ? "PASS" : "FAIL");
    printf("=============================\n");
}

int main() {
    int choice;
    while (1) {
        printf("\n1. Generate New Marksheet\n2. Exit\nEnter choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1: generateMarksheet(); break;
            case 2: exit(0);
            default: printf("Invalid Choice!\n");
        }
    }
    return 0;
}