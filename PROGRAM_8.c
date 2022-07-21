
// 8. Write a program to check whether a given year is a leap year or not.

#include<stdio.h>

int main()
{
    int year;

    printf("Enter a year: ");
    scanf("%d",&year);

    if(year % 4 == 0)
    {
        if(year % 100 == 0)
            printf("Year: %d is Century Leap year",year);
        else 
            printf("Year: %d is a leap year but not a Century year",year);
    }
    else
        printf("Year: %d is not a leap year",year);
    
    return 0;
}
/*
    OUTPUT-1:
    Enter a year: 2020
    Year: 2020 is a leap year but not a Century year

    OUTPUT-2:
    Enter a year: 2022
    Year: 2022 is not a leap year
    
    OUTPUT-3:
    Enter a year: 2000
    Year: 2000 is Century Leap year
*/