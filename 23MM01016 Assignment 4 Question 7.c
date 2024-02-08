#include <stdio.h>

int main() {
   
    int age;
    double ticketPrice;

   
    printf("Enter age: ");
    scanf("%d", &age);

    
    if (age < 0) {
        printf("Error: Invalid age.\n");
    } else if (age < 5) {
        ticketPrice = 0.0; 
    } else if (age <= 12) {
        ticketPrice = 20.0; 
    } else if (age <= 59) {
        ticketPrice = 50.0; 
    } else {
        
        ticketPrice = 0.8 * 50.0;
    }


    printf("Ticket Price: $%.2lf\n", ticketPrice);

    return 0;
}
