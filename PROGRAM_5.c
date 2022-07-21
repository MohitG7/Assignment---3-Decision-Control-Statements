
// 5. Write a program to check whether a given number is a three-digit number or not.

#include<stdio.h>

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d",&num);

if(100 <= num && num < 1000)
    printf("Given number is of three digits");
    else
    printf("Given number is not a three digit number");

return 0;
}
/*
     OUTPUT-1:
    Enter a number: 108
    Given number is of three digits

    OUTPUT-2:
    Enter a number: 99
    Given number is not a three digit number
*/