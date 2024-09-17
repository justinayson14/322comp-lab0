#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "address_book.h"

int main(void) {

    Person *user;
    //Address_book *infoBook = create_address_book();
    char userName[30];
    int n; 
    
    printf("Enter how many people: \n");
    scanf("%d", &n);
    //infoBook->count = n;

    for(int i = 0; i < n; i++) {
        printf("Enter your full name: \n");
        scanf("%[^\n]%*c", &userName);

        user = malloc(sizeof(Person) + sizeof(char) * strlen(userName));

        strcpy(user->name, userName);

        printf("Enter age: \n");
        scanf("%d", &user->age);

        printf("Enter 10-digit phone number: \n");
        scanf("%s", &user->phone);

        print_person(user);

        //infoBook->people[i] = user;
    }
    //print_address_book(infoBook);
    return 0;
}