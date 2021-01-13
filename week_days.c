// Write a program to input week number and printweek days.
#include <stdio.h>
int main()
{
    int no;
    printf("Enter any week number.");
    scanf("%d", &no);
    switch (no)
    {
    case 1:
        printf("Sunday");
        break;
    case 2:
        printf("Monday");
        break;
    case 3:
        printf("Tuesday");
        break;
    case 4:
        printf("Wednesday");
        break;
    case 5:
        printf("Thursday");
        break;
    case 6:
        printf("Friday");
        break;
    case 7:
        printf("Saturday");
        break;

    default:
        printf("Wrong week number");
        break;
    }
    return 0;
}
