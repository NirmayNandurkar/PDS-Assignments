#include <stdio.h>


struct Address {
    char street[100];
    char city[100];
    char zipCode[20];
};


struct Person {
    char name[100];
    struct Address address; 
};

int main() {
   
    struct Person person;

    printf("Enter name:- \n");
    fgets(person.name, sizeof(person.name), stdin);

    printf("Enter street:- \n");
    fgets(person.address.street, sizeof(person.address.street), stdin);

    printf("Enter city:- \n");
    fgets(person.address.city, sizeof(person.address.city), stdin);

    printf("Enter zip code:- \n");
    fgets(person.address.zipCode, sizeof(person.address.zipCode), stdin);

    printf("\nPerson Details:\n");
    printf("Name: %s", person.name);
    printf("Address: %s, %s, %s", person.address.street, person.address.city, person.address.zipCode);

    return 0;
}
