
// 4. Write a program to check whether a given number is an even number or an odd
// number without using % operator.

#include<stdio.h>

int main()
{
    int num,x;

    printf("Enter a number: ");
    scanf("%d",&num);

    x = num & 1;

    if(x == 1)
        printf("Number is Odd");
    else
        printf("Number is Even");
    
    return 0;
}
/*
    OUTPUT-1:
    Enter a number: 108
    Number is Even

    OUTPUT-2:
    Enter a number: 101
    Number is Odd
*/