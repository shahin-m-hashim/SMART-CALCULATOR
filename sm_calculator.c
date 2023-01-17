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
    char choice;
    int operation,n,flag=1;
    printf("Available Operations\n1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n5.Modulus\n6.Exit\n");
    do
    {
        flag=1;
        printf("What operation would you like to perform ?\nOperation:");
        scanf("%d", &operation);

        switch(operation) 
        {
            int check1;
            case 1:         
                printf("Enter the number of numbers: ");
                do{
                    check1 = scanf(" %d", &n);
                    if(check1 != 1) {
                        printf("Error: Invalid input. Please enter a valid number:");
                        fflush(stdin);
                    }
                }while(check1 != 1);
                result = add(n);
                if(result == 0) flag = 0;
                break;

            case 2:
                printf("Enter the number of numbers: ");
                do{
                    check1 = scanf(" %d", &n);
                    if(check1 != 1) {
                        printf("Error: Invalid input. Please enter a valid number:");
                        fflush(stdin);
                    }
                }while(check1 != 1);
                result = subtract(n);
                if(result == 0) flag = 0;
                break;
            case 3:
                printf("Enter the number of numbers: ");
                do{
                    check1 = scanf(" %d", &n);
                    if(check1 != 1) {
                        printf("Error: Invalid input. Please enter a valid number:");
                        fflush(stdin);
                    }
                }while(check1 != 1);
                result = multiply(n);
                if(result == 0) flag = 0;
                break;
            case 4:
                result = divide();
                if(result == 0) flag = 0;
                break;
            case 5:
                result = modulus();
                if(result == 0) flag = 0;
                break;
            case 6:
            printf("Exiting The Program");
            exit(0);
            default:
                printf("Error: Invalid operation\n");
                return 0;
        }
        if(flag) printf("Result: %lf\n", result);
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
