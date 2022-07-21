
// 17. Write a program which takes the length of the sides of a triangle as an input. Display 
// whether the triangle is valid or not. 

#include<stdio.h>

int main()
{
int a,b,c;

printf("Enter a length of the side of a triangle: ");
scanf("%d%d%d",&a,&b,&c);

if((a+b>c) && (b+c>a) && (c+a>b))
    printf("It is a valid Triangle");
else
    printf("It is Not a valid Triangle");

return 0;
}
/*
    OUTPUT-1:
    Enter a length of the side of a triangle: 4
    5
    3
    It is a valid Triangle

    OUTPUT-2:
    Enter a length of the side of a triangle: 6
    3
    2
    It is Not a valid Triangle
*/