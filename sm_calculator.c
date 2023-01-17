#include <stdio.h>
#include<stdlib.h>

double add(int n) 
{
    // addition code
}

double subtract(int n) 
{
   // subtraction code
}

double multiply(int n) 
{
    // multiplication code
}

double divide(void) 
{
    // division code
}

double modulus(void) 
{
    // modulus code
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
