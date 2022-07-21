
// 3. Write a program to check whether a given number is an even number or an odd
// number.

#include<stdio.h>

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d",&num);

    if(num % 2 == 0)
        printf("Number is Even");
    else
        printf("Number is Odd");

    return 0;
}
/*
    OUTPUT-1:
    Enter a number: 786
    Number is Even

    OUTPUT-2:
    Enter a number: 45
    Number is Odd
*/