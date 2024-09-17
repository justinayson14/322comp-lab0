#include <stdlib.h>
#include <stdio.h>
#include "address_book.h"

void print_person(const Person* person) {
    printf("\nName: %s", person->name);
    printf("\nAge: %d", person->age);
    printf("\nPhone number: +%s", person->phone);
}

void print_address_book(const Address_book* address_book) {
    printf("\n==== Entries(%d) ====\n", address_book->count);
    for(int i = 0; i < address_book->count; i++) {
        printf("Name: %s\n", address_book->people[i]->name);
        printf("Age: %d\n", address_book->people[i]->age);
        printf("Phone: %s\n\n", address_book->people[i]->phone);
    }
}

Address_book* create_address_book(void) {
    Address_book *book = malloc(sizeof(Address_book) + sizeof(Person) * book->count);  
    return book;
}

void destroy_address_book(Address_book* address_book);
