
// 10. Write a program which takes the cost price and selling price of a product from the
// user. Now calculate and print profit or loss percentage.

#include<stdio.h>

int main()
{
    float CP,SP,profit,loss;

    printf("Enter a Cost Price: ");
    scanf("%d",&CP);
    printf("Enter a Selling price: ");
    scanf("%d",&SP);

if(SP > CP)
{
    profit = SP - CP;
    float pr_prct = (profit/CP)*100;

    printf("It is Profit and Profit Percentage is: %.2f",pr_prct);
}
else
{
    if(CP > SP)
    {
        loss = CP - SP;
        float ls_prct = (loss/CP)*100;

        printf("It is Loss ans Loss Percentage is: %.2f",ls_prct);
    }else if(CP == SP)
                printf("Neighter Profit nor Loss");
}
return 0;   
}
/*
    OUTPUT-1:
    Enter a Cost Price: 5432
    Enter a Selling price: 34532
    It is Profit and Profit Percentage is: 535.71
    
    OUTPUT-2:
    Enter a Cost Price: 4533
    Enter a Selling price: 4511
    It is Loss ans Loss Percentage is: 0.49

    OUTPUT-3:
    Enter a Cost Price: 3400
    Enter a Selling price: 3400
    Neighter Profit nor Loss
*/