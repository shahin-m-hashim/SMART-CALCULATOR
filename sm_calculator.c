#include <stdio.h>
#include<stdlib.h>
#include<math.h>

double add(int n) 
{
    double result = 0, num;
    int check;
    for(int i = 0; i < n; i++) 
    {
        do 
        {
            printf("Enter number %d: ", i+1);
            check = scanf("%lf", &num);
            if(check != 1) 
            {
                printf("Error: Invalid input. Please enter a valid number\n");
                fflush(stdin);
            }
        }while(check != 1);
        result += num;
    }
    return result;
}

double subtract(int n) 
{
    int check;
    double result, num;
    printf("Enter number 1: ");
    scanf("%lf", &result);
    for(int i = 1; i < n; i++) 
    {
        do
        {
            printf("Enter number %d: ", i+1);
            check = scanf("%lf", &num);
            if(check != 1) 
            {
                printf("Error: Invalid input. Please enter a valid number\n");
                return 0;
            }
        }while(check != 1);
        result -= num;
    }
    return result;
}

double multiply(int n) 
{
    int check;
    double result = 1, num;
    for(int i = 0; i < n; i++) 
    {
        do
        {
            printf("Enter number %d: ", i+1);
            check = scanf("%lf", &num);
            if(check != 1) 
            {
                printf("Error: Invalid input. Please enter a valid number\n");
                return 0;
            }
        }while(check != 1);
        result *= num;
    }
    return result;
}

double divide(void) 
{
    int check;
    double num1, num2;
    printf("Enter first number: ");
    check = scanf("%lf", &num1);
        if(check != 1) 
        {
            printf("Error: Invalid input. Please enter a valid number\n");
            return 0;
        }
    printf("Enter second number: ");
    check = scanf("%lf", &num2);
        if(check != 1) 
        {
            printf("Error: Invalid input. Please enter a valid number\n");
            return 0;
        }
    if(num2 == 0) 
    {
        printf("Error: Cannot divide by zero\n");
        return 0;
    }
    return num1/num2;
}

double modulus(void) 
{
    int check;
    double num1, num2;
    printf("Enter first number: ");
    check = scanf("%lf", &num1);
        if(check != 1) 
        {
            printf("Error: Invalid input. Please enter a valid number\n");
            return 0;
        }
    printf("Enter second number: ");
    check = scanf("%lf", &num2);
        if(check != 1) 
        {
            printf("Error: Invalid input. Please enter a valid number\n");
            return 0;
        }
    if(num2 == 0) {
        printf("Error: Cannot divide by zero\n");
        return 0;
    }
    return (int)num1 % (int)num2;
}

int main() 
{
    double result;
    char operation,choice;
    int n,flag;

    do
    {
        printf("Enter operation (+, -, *, /, %): ");
        scanf(" %c", &operation);

        switch(operation) 
        {
            case '+':
                //switch case for addition
                break;
            case '-':
                //switch case for subtraction
            case '*':
                //switch case for multiplication
            case '/':
                //switch case for division
                break;
            case '%':
                //switch case for modulus
                break;
            default:
                printf("Error: Invalid operation\n");
                return 0;
        }
        if(flag) 
        {
            printf("Do you want to continue (Y/N) ?\nChoice:");
            scanf(" %c", &choice);
            while(choice != 'Y' && choice != 'y' && choice != 'N' && choice != 'n') 
            {
                printf("Error: Invalid input. Please enter either 'Y' or 'N'\nChoice:");
                fflush(stdin);
                scanf(" %c", &choice);
            }
        }
        else
        {
            choice = 'N';
        }
    }while(choice == 'Y' || choice == 'y');
    printf("\n");
    return 0;
}
