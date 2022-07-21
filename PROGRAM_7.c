
// 7. Write a program to check whether roots of a given quadratic equation are real &
// distinct, real & equal or imaginary roots

#include<stdio.h>

int main()
{
    int a,b,c,D;

    printf("Enter values of a,b and c: ");
    scanf("%d%d%d",&a,&b,&c);

    D = (b*b) - 4*a*c;

    if(D > 0)
        printf("Roots of quadratic equation are Real & Distinct");
    if(D == 0)
        printf("Roots of quadratic equation are Real and Equal");
    if(D < 0)
        printf("Roots of quadratic equation are imaginary");
    
    
    return 0;
}
/*
    OUTPUT-1:
    Enter values of a,b and c: 3
    7
    2
    Roots of quadratic equation are Real & Distinct

    OUTPUT-2:
    Enter values of a,b and c: 1
    4
    4
    Roots of quadratic equation are Real and Equal
    
    OUTPUT-3:
    Enter values of a,b and c: 4
    2
    6
    Roots of quadratic equation are imaginary
*/