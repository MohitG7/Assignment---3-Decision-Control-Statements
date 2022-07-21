
// 13. Write a program to check whether a given number is divisible by 3 and divisible by 2.

#include<stdio.h>

int main()
{
    int num;

    printf("Enter a number for check divisibility: ");
    scanf("%d",&num);

    if(num %3 == 0 && num %2 == 0)
        printf("Given number'%d' is divisible by 3 and 2",num);
    else
        printf("Given number '%d' is Not divisible by 3 and 2",num);

    return 0;
}
/*
    OUTPUT-1:
    Enter a number for check divisibility: 36
    Given number'36' is divisible by 3 and 2

    OUTPUT-2:
    Enter a number for check divisibility: 45
    Given number '45' is Not divisible by 3 and 2
*/