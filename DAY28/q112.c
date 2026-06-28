#include <stdio.h>
#include <stdlib.h>

struct Contact {
    char name[50];
    char phone[15];
    char email[50];
};

void addContact() {
    FILE *fp = fopen("contacts.dat", "ab+");
    struct Contact c;
    if (fp == NULL) return;
    printf("Enter Name: ");
    scanf(" %[^\n]s", c.name);
    printf("Enter Phone Number: ");
    scanf("%s", c.phone);
    printf("Enter Email: ");
    scanf("%s", c.email);
    fwrite(&c, sizeof(struct Contact), 1, fp);
    fclose(fp);
    printf("Contact Saved Successfully!\n");
}

void displayContacts() {
    FILE *fp = fopen("contacts.dat", "rb");
    struct Contact c;
    if (fp == NULL) {
        printf("Address book empty.\n");
        return;
    }
    printf("\n--- Contact List ---\n");
    while (fread(&c, sizeof(struct Contact), 1, fp)) {
        printf("Name: %s | Phone: %s | Email: %s\n", c.name, c.phone, c.email);
    }
    fclose(fp);
}

int main() {
    int choice;
    while (1) {
        printf("\n1. Add Contact\n2. Display Contacts\n3. Exit\nEnter choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1: addContact(); break;
            case 2: displayContacts(); break;
            case 3: exit(0);
            default: printf("Invalid Choice!\n");
        }
    }
    return 0;
}