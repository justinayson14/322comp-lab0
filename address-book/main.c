#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "address_book.h"

int main(void) {

    Person *user;
    char userName[30];

    printf("Enter your full name: ");
    scanf("%[^\n]%*c", &userName);

    user = malloc(sizeof(Person) + sizeof(char) * strlen(userName));

    strcpy(user->name, userName);

    printf("Enter age: ");
    scanf("%d", &user->age);

    printf("Enter 10-digit phone number: ");
    scanf("%s", &user->phone);

    print_person(user);


    return 0;
}