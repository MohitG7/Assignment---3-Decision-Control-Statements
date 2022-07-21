
// 16. Write a program to check whether a given character is an alphabet (uppercase), an 
// alphabet (lower case), a digit or a special character.

#include<stdio.h>

int main()
{
    char ch;

    printf("Enter a character: ");
    scanf("%c",&ch);

    if('a'<=ch && ch<='z')
        printf("Given Character is a Lower Case Alphabet");
    else if('A'<=ch && ch<= 'Z')
        printf("Given Character is an Upper Case Alphabet");
        else if('0'<=ch && ch<='9')
                printf("Given Character is a Digit");
            else
                printf("It is a Special Character");

    return 0;
}
/*
    OUTPUT-1:
    Enter a character: 5
    Given Character is a Digit

    OUTPUT-2:
    Enter a character: $
    It is a Special Character

    OUTPUT-3:
    Enter a character: F
    Given Character is an Upper Case Alphabet

    OUTPUT-4:
    Enter a character: m
    Given Character is a Lower Case Alphabet
*/