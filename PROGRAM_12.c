
// 12. Write a program to check whether a given alphabet is in uppercase or lowercase.

#include<stdio.h>

int main()
{
    char ch;

    printf("Enter a Alphabet :");
    scanf("%c",&ch);

    if('a'<=ch && ch<='z')
        printf("Alphabet: '%c' is in lowercase",ch);
    else 
        printf("Alphabet: '%c' is in uppercase",ch);

    return 0;
}
/*
    OUTPUT-1:
    Enter a Alphabet :B
    Alphabet: 'B' is in uppercase

    OUTPUT-2:
    Enter a Alphabet :a
    Alphabet: 'a' is in lowercase
*/