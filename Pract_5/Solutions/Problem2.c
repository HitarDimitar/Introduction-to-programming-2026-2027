#include <stdio.h>

int main(void)
{
    int day, month, year;
    scanf_s("%d %d %d",&day ,&month ,&year);

    int isLeap = (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
    int daysInMonth;

    if (month < 1 || month > 12 || year < 1) {
        printf("Invalid date\n");
        return 0;
    }

    if (month == 2) {
        daysInMonth = isLeap ? 29 : 28;
    } else if (month == 4 || month == 6 || month == 9 || month == 11) {
        daysInMonth = 30;
    } else {
        daysInMonth = 31;
    }

    if (day >= 1 && day <= daysInMonth) {
        printf("Valid date\n");
    } else {
        printf("Invalid date\n");
    }

    return 0;
}
