#include <stdio.h>
#include <ctype.h>
int main ()

{

    printf("Welcome to the investment calculator!\n");
    
    //Introduction to the program
    char name[100];

    do
    {
        printf("Whats your name?\n");
        scanf("%100s", name);

        if (!isalpha(name[0]))
        {
            printf("Please enter a valid name!\n");
        }
        
    } while (!isalpha(name[0]));

    printf("Hello, %s!\n", name);


   
    //Promp to get how much  money want to invest per week
    double perWeek;
    
    do
    {
        printf("How much do you want to invest per week?\n");
        scanf("%lf", &perWeek);

        if (perWeek == 0)
        
        printf("%s, please enter an amount greater than 0\n", name);
        
        
    } while (perWeek == 0);




//make calculations of investment per year and month

    double perMonth = perWeek * 4;
    double perYear = perMonth * 12;
    

    {
        printf("%s, your monthly investment will be $%.2lf\n", name, perMonth);
        printf("And your annual investment will be $%.2lf\n", perYear);
    }
    



    //Calculation for how many years you will need to invest
    int endYears;

    do
    {
        printf("%s, how many years do you want to invest in the stock market?\n", name);
        scanf("%d", &endYears);

        if (endYears == 0)
        {
            printf("%s, please enter a number greater than 0\n", name);
        }
        
    } while (endYears == 0);





    //This code will update the value and add it until the endYears value is reached

    int years= 0;
    double investmentReturn = 0;

    while (years < endYears)
    {
        double marketReturn = investmentReturn * 0.08;
        investmentReturn += marketReturn + perYear; //make the value go up
        years++; //just add one year up the timeframe

    }

    printf("%s, your investment return in %d years will be $%.2lf\n based on an anual return of 8%%.\n", name, endYears, investmentReturn);

    return 0;
} 