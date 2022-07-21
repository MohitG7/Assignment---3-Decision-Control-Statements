

// 14. Write a program to check whether a given number is divisible by 7 or divisible by 3.

#include<stdio.h>

int main()
{
    int num;

    printf("Enter a number for check divisibility: ");
    scanf("%d",&num);

    if(num%7==0 || num%3==0)
        printf("Number:'%d' is divisible by 7 or 3",num);
    else
        printf("Number:'%d' is Not divisible by 7 or 3",num);

    return 0;
}
/*
    OUTPUT-1:
    Enter a number for check divisibility: 70
    Number:'70' is divisible by 7 or 3

    OUTPUT-2:
    Enter a number for check divisibility: 40
    Number:'40' is Not divisible by 7 or 3
*/