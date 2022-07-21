// 6. Write a program to print greater between two numbers. Print one number of both are
// the same.

#include<stdio.h>

int main()
{
    int a,b;

    printf("Enter a two numbers for comparison: ");
    scanf("%d%d",&a,&b);

    if(a > b)
        printf("%d is a greater number",a);
    else{
        if(b > a)
            printf("%d is a greater number",b);
        if(a == b)
            printf("Both the numbers are same that is: %d",a);
        }
    return 0;
}
/*
    OUTPUT-1:
    Enter a two numbers for comparison: 108
    101
    108 is a greater number

    OUTPUT-2:
    Enter a two numbers for comparison: 108
    108
    Both the numbers are same that is: 108
*/