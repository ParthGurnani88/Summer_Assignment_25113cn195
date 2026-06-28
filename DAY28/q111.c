#include <stdio.h>
#include <stdlib.h>

struct Ticket {
    int ticketId;
    char passengerName[50];
    int seatNumber;
    float fare;
};

void bookTicket() {
    FILE *fp = fopen("tickets.dat", "ab+");
    struct Ticket t;
    if (fp == NULL) return;
    printf("Enter Ticket ID: ");
    scanf("%d", &t.ticketId);
    printf("Enter Passenger Name: ");
    scanf(" %[^\n]s", t.passengerName);
    printf("Enter Seat Number: ");
    scanf("%d", &t.seatNumber);
    printf("Enter Fare: ");
    scanf("%f", &t.fare);
    fwrite(&t, sizeof(struct Ticket), 1, fp);
    fclose(fp);
    printf("Ticket Booked Successfully!\n");
}

void viewBookings() {
    FILE *fp = fopen("tickets.dat", "rb");
    struct Ticket t;
    if (fp == NULL) {
        printf("No bookings found.\n");
        return;
    }
    printf("\n--- Booked Tickets ---\n");
    while (fread(&t, sizeof(struct Ticket), 1, fp)) {
        printf("ID: %d | Passenger: %s | Seat: %d | Fare: %.2f\n", 
               t.ticketId, t.passengerName, t.seatNumber, t.fare);
    }
    fclose(fp);
}

int main() {
    int choice;
    while (1) {
        printf("\n1. Book Ticket\n2. View Bookings\n3. Exit\nEnter choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1: bookTicket(); break;
            case 2: viewBookings(); break;
            case 3: exit(0);
            default: printf("Invalid Choice!\n");
        }
    }
    return 0;
}