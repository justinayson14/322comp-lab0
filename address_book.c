#include <stdlib.h>
#include <stdio.h>
#include "address_book.h"

void print_person(const Person* person) {
    printf("\nName: %s", person->name);
    printf("\nAge: %d", person->age);
    printf("\nPhone number: +%s", person->phone);
}

void print_address_book(const Address_book* address_book);

Address_book* create_address_book(void);

void destroy_address_book(Address_book* address_book);
