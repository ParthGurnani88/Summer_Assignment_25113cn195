#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student {
    int roll;
    char name[50];
    char course[30];
};

void addStudent() {
    FILE *fp = fopen("students.dat", "ab+");
    struct Student s;
    if (fp == NULL) return;
    printf("Enter Roll Number: ");
    scanf("%d", &s.roll);
    printf("Enter Name: ");
    scanf(" %[^\n]s", s.name);
    printf("Enter Course: ");
    scanf(" %[^\n]s", s.course);
    fwrite(&s, sizeof(struct Student), 1, fp);
    fclose(fp);
    printf("Record Added Successfully!\n");
}

void displayStudents() {
    FILE *fp = fopen("students.dat", "rb");
    struct Student s;
    if (fp == NULL) {
        printf("No records found.\n");
        return;
    }
    printf("\n--- Student Records ---\n");
    while (fread(&s, sizeof(struct Student), 1, fp)) {
        printf("Roll: %d | Name: %s | Course: %s\n", s.roll, s.name, s.course);
    }
    fclose(fp);
}

int main() {
    int choice;
    while (1) {
        printf("\n1. Add Student\n2. Display Students\n3. Exit\nEnter choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1: addStudent(); break;
            case 2: displayStudents(); break;
            case 3: exit(0);
            default: printf("Invalid Choice!\n");
        }
    }
    return 0;
}