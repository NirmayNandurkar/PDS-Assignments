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


void removeNewline(char *str) {
    int i = 0;
    while (str[i] != '\0') {
        if (str[i] == '\n') {
            str[i] = '\0';
            break;
        }
        i++;
    }
}

int main() {
    
    struct Person person;

    printf("Enter name:- \n");
    fgets(person.name, sizeof(person.name), stdin);
    removeNewline(person.name);

    printf("Enter street:- \n");
    fgets(person.address.street, sizeof(person.address.street), stdin);
    removeNewline(person.address.street);

    printf("Enter city:- \n");
    fgets(person.address.city, sizeof(person.address.city), stdin);
    removeNewline(person.address.city);

    printf("Enter zip code:- \n");
    fgets(person.address.zipCode, sizeof(person.address.zipCode), stdin);
    removeNewline(person.address.zipCode);

    
    printf("\nPerson's Details:\n");
    printf("Name:- %s\n", person.name);
    printf("Address:- %s, %s, %s\n", person.address.street, person.address.city, person.address.zipCode);

    return 0;
}
