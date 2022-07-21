
// 15. Write a program to check whether a given number is positive, negative or zero.

#include<stdio.h>

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d",&num);

    if(num > 0)
        printf("Number is positive");
    else if(num < 0)
        printf("Number is Negative");
        else
            printf("Number is Zero");

    return 0;
}
/*
    OUTPUT-1:
    Enter a number: 786
    Number is positive

    OUTPUT-2:
    Enter a number: -22
    Number is Negative

    OUTPUT-3:
    Enter a number: 0
    Number is Zero
*/