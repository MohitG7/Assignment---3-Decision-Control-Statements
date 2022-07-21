
// 1. Write a program to check whether a given number is positive or non-positive.

#include<stdio.h>

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d",&num);

    if (num > 0)
        printf("Number is positive");
    else
        printf("Number is non-positive");

    return 0;
}
/*
    OUTPUT-1:
    Enter a number: 45
    Number is positive
    
    OUTPUT-2:
    Enter a number: 0
    Number is non-positive
    
    OUTPUT-3:
    Enter a number: -89
    Number is non-positive
*/