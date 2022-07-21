
/* 11. Write a program to take marks of 5 subjects from the user. Assume marks are given 
out of 100 and passing marks is 33. Now display whether the candidate passed the 
examination or failed. */

#include<stdio.h>

int main()
{
    int s1,s2,s3,s4,s5;

    printf("Enter a marks of five subjects: ");
    scanf("%d%d%d%d%d",&s1,&s2,&s3,&s3,&s4,&s5);

    if(s1>=33 && s2>=33 && s3>=33 && s4>=33 && s5>=33)
        printf("Candidate is Passed in Examination");
    else
        printf("Candidate is Failed in Examinatian");

    return 0;
}

/*
    OUTPUT-1:
    Enter a marks of five subjects: 43
    55
    67
    36
    76
    Candidate is Passed in Examination

    OUTPUT-2:
    Enter a marks of five subjects: 23
    43
    65
    76
    43
    Candidate is Failed in Examinatian
*/