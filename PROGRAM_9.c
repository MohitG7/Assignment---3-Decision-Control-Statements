
// 9. Write a program to find the greatest among three given numbers. Print number once
// if the greatest number appears two or three times.

#include<stdio.h>

int main()
{
    int a,b,c;

    printf("Enter a values of a,b,c of camparison: ");
    scanf("%d%d%d",&a,&b,&c);

    if(a > b)
    {
        if(a > c)
            printf("%d is a greater nummber",a);
        else
            printf("%d is a greater number",c);
    }
    else
    {
        if(b > c)
            printf("%d is greater number",b);
        else
            printf("%d is greater number",c);
    }
    return 0;
}
/*
    OUTPUT-1:
    Enter a values of a,b,c of camparison: 23
    65
    54
    65 is greater number

    OUTPUT-2:
    Enter a values of a,b,c of camparison: 22
    22
    22
    22 is greater number

    OUTPUT-3:
    Enter a values of a,b,c of camparison: 32
    43
    32
    43 is greater number  
*/