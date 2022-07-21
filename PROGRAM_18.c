
// 18. Write a program which takes the month number as an input and display number of 
// days in that month.

#include<stdio.h>

int main()
{
    int num;

    printf("Enter a month number: ");
    scanf("%d",&num);

    if(num == 1)
        printf("Month is january and it has 31 days");
    if(num == 2)
        printf("Month is Fabruary and it has 28 or 29 days");
    if(num == 3)
        printf("Month is March and it has 31 days");
    if(num == 4)
        printf("Month is April and it has 30 days");
    if(num == 5)
        printf("Month is May and it has 31 days");
    if(num == 6)
        printf("Month is June and it has 30 days");
    if(num == 7)
        printf("Month is July and it has 31 days");
    if(num == 8)
        printf("Month is August and it has 31 days");
    if(num == 9)
        printf("Month is September and it has 30 days");
    if(num == 10)
        printf("Month is October and it has 31 days");
    if(num == 11)
        printf("Month is November and it has 30 days");
    if(num == 12)
        printf("Month is December and it has 31 days");

    return 0;
}
/*
    OUTPUT-1:
    Enter a month number: 5
    Month is May and it has 31 days

    OUTPUT-2:
    Enter a month number: 2
    Month is Fabruary and it has 28 or 29 days
*/