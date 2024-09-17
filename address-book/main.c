//Justin Ayson Comp 322 - Lab 0
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "address_book.h"

int main(void) {
    Address_book *theBook = create_address_book();
    print_address_book(theBook);
    destroy_address_book(theBook);
    return 0;
}