#include <stdio.h>

struct Date {
    int day;
    int month;
    int year;
};


int compareDates(struct Date date1, struct Date date2) {
    if (date1.year > date2.year)
        return 1;
    else if (date1.year < date2.year)
        return -1;
    else {
        if (date1.month > date2.month)
            return 1;
        else if (date1.month < date2.month)
            return -1;
        else {
            if (date1.day > date2.day)
                return 1;
            else if (date1.day < date2.day)
                return -1;
            else
                return 0; 
        }
    }
}

int main() {
    
    struct Date date1;
    struct Date date2;

    printf("Enter information for date-1 :\n");
    
    printf("Enter year:- \n");
    scanf("%d", &date1.year);

    printf("Enter Month:- \n");
    scanf("%d", &date1.month);

    printf("Enter Day no:-\n");
    scanf("%d", &date1.day);

    printf("\nEnter information for Date-2 :\n");
    printf("Enter year:- \n");
    scanf("%d", &date2.year);

    printf("Enter Month:- \n");
    scanf("%d", &date2.month);

    printf("Enter Day no:-\n");
    scanf("%d", &date2.day);

    if(date1.month > 12 || date2.month > 12)
    {
        printf("Invalid date");
        return 0;
    }

    int result = compareDates(date1, date2);

    if (result == 1)
        printf("Date 1 is later than Date 2.\n");
    else if (result == -1)
        printf("Date 1 is earlier than Date 2.\n");
    else
        printf("Date 1 is the same as Date 2.\n");

    return 0;
}
