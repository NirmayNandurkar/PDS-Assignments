#include <stdio.h>
int main()
{
    int att, marks, totclass;
    float marksobt;

    printf("Enter total number of classes\n");
    scanf("%d", &totclass);
    printf("Enter number of classes attended:- \n");
    scanf("%d", &att);
    printf("Enter total marks obtained:- \n");
    scanf("%d", &marks);

    marksobt = marks * (att / totclass);

    if(marksobt >= 90)
    {
        printf("Final Score :- %.1f \nGrade :- Ex", marksobt);
    }
    else if(marksobt >= 80 && marksobt <= 89)
    {
        printf("Final Score :- %.1f \nGrade :- A", marksobt);
    }
    else if(marksobt >= 70 && marksobt <= 79)
    {
        printf("Final Score :- %.1f \nGrade :- B", marksobt);
    }
    else if(marksobt >= 60 && marksobt <= 69)
    {
        printf("Final Score :- %.1f \nGrade :- C");
    }
    else if(marksobt >= 50 && marksobt <= 59)
    {
        printf("Final Score :- %.1f \nGrade :- D", marksobt);
    }
    else if(marksobt >= 40 && marksobt <= 49)
    {
        printf("Final Score :- %.1f \nGrade :- P", marksobt);
    }
    else if(marksobt < 40)
    {
        printf("Final Score :- %.1f \nGrade :- F", marksobt);
    }
    return 0;

}