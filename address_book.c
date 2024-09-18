#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "address_book.h"

void print_person(const Person* person) {
    printf("\nName: %s\n", person->name);
    printf("Age: %d\n", person->age);
    printf("Phone number: +%s\n\n", person->phone);
}

void print_address_book(const Address_book* address_book) {
    printf("\n==== Entries (%d) ====\n", address_book->count);
    for(int i = 0; i < address_book->count; i++) {
        print_person(&address_book->people[i]);
    } 
}

Address_book* create_address_book(void) {
    Address_book *book; 
    int n, c;

    printf("\n\nEnter number of people: ");
    scanf("%d", &n);
    printf("\n");
    while((c = getchar()) != '\n' && c != EOF); //clear input

    book = malloc(sizeof(Address_book));
    if(book == NULL) {
        printf("\nbook malloc failed!");
        exit(EXIT_SUCCESS);
    }

    book->people = malloc(n * sizeof(Person));
    if(book->people == NULL) {
        printf("\npeople malloc failed!");
        exit(EXIT_SUCCESS);
    }
    
    book->count = n;

    for(int i = 0; i < n; i++) {
        printf("=== Enter person %d information ===\n", i+1);
        printf("Enter name: ");
        fgets(book->people[i].name, sizeof(book->people->name), stdin);
        book->people[i].name[strlen(book->people[i].name) - 1] = 0; //remove '\n' at end of string

        printf("Enter age: ");
        scanf("%d", &book->people[i].age);
        while((c = getchar()) != '\n' && c != EOF);

        printf("Enter phone: ");
        fgets(book->people[i].phone, sizeof(book->people->phone), stdin);
        book->people[i].phone[strlen(book->people[i].phone) - 1] = 0;

        print_person(&book->people[i]);
    }

    return book;
}

void destroy_address_book(Address_book* address_book) {
    free(address_book); //frees up allocated memory from malloc
}
