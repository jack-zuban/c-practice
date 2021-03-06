#include <stdio.h>

struct date
{
    int month;
    int day;
    int year;
};

// Compute the number of dates between two dates using Julian days comparison
int daysDiff(struct date firstDate, struct date secondDate)
{
    int julianDay(struct date);

    return julianDay(firstDate) - julianDay(secondDate);
}

// convert date to Julian day number
int julianDay(struct date countDate)
{
    int fCount(int year, int month);
    int gCount(int month);
    
    return 1461 * fCount(countDate.year, countDate.month) / 4 + 153 * gCount(countDate.month) / 5 + countDate.day;
}

int fCount(int year, int month)
{
    return (month <= 2) ? year - 1 : year;
}

int gCount(int month)
{
    return (month <= 2) ? month + 13 : month + 1;
}

int main (void)
{
    struct date firstDate, secondDate;
    int daysDiff(struct date, struct date);

    printf("Please enter first date (mm/dd/yyy): ");
    scanf("%d/%d/%d", &firstDate.month, &firstDate.day, &firstDate.year);

    printf("Please enter second date (mm/dd/yyy): ");
    scanf("%d/%d/%d", &secondDate.month, &secondDate.day, &secondDate.year);

    printf("The number of days between those days are: %i\n", daysDiff(secondDate, firstDate));

    return 0;
}
