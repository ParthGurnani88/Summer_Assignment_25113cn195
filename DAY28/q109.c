#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Book {
    int id;
    char title[100];
    char author[50];
    int available;
};

void addBook() {
    FILE *fp = fopen("library.dat", "ab+");
    struct Book b;
    if (fp == NULL) return;
    printf("Enter Book ID: ");
    scanf("%d", &b.id);
    printf("Enter Title: ");
    scanf(" %[^\n]s", b.title);
    printf("Enter Author: ");
    scanf(" %[^\n]s", b.author);
    b.available = 1;
    fwrite(&b, sizeof(struct Book), 1, fp);
    fclose(fp);
    printf("Book Added Successfully!\n");
}

void viewBooks() {
    FILE *fp = fopen("library.dat", "rb");
    struct Book b;
    if (fp == NULL) {
        printf("No books in library.\n");
        return;
    }
    printf("\n--- Library Books ---\n");
    while (fread(&b, sizeof(struct Book), 1, fp)) {
        printf("ID: %d | Title: %s | Author: %s | Status: %s\n", 
               b.id, b.title, b.author, b.available ? "Available" : "Issued");
    }
    fclose(fp);
}

int main() {
    int choice;
    while (1) {
        printf("\n1. Add Book\n2. View Books\n3. Exit\nEnter choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1: addBook(); break;
            case 2: viewBooks(); break;
            case 3: exit(0);
            default: printf("Invalid Choice!\n");
        }
    }
    return 0;
}