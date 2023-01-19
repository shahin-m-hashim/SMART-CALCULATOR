#include <stdio.h>
#include<stdlib.h>
#include<math.h>
#include<ctype.h>
#include<string.h>

// INTEGER VALIDATION

int getValidInteger() 
{

    char input[100];
    int validInteger;
    while (1) {
        scanf("%s", input);
        int i;
        for (i = 0; i < strlen(input); i++) 
        {
            if (!isdigit(input[i])) {
                printf("Error: Invalid input. Please enter a valid integer:");
                break;
            }
        }
        if (i == strlen(input)) 
        {
            validInteger = atoi(input);
            break;
        }
    }
    return validInteger;
}

// ADDITION 

double add(int n) 
{
    double result = 0, num;
    for(int i = 0; i < n; i++) 
    {
        printf("Enter number %d: ", i+1);
        num = getValidInteger();
        result += num;
    }
    return result;
}

// SUBTRACTION - NEEDS FIXING

// double subtract(int n) 
// {
//     double result, num;
//     printf("Enter number 1: ");
//     num = getValidInteger();
//     for(int i = 1; i < n; i++) {
//         printf("Enter number %d: ", i+1);
//         num = getValidInteger();
//         result -= num;
//     }
//     return result;
// }

// MULTIPLICATION - NEEDS FIXING

double multiply(int n) 
{
    double result = 0, num;
    for(int i = 0; i < n; i++) 
    {
        printf("Enter number %d: ", i+1);
        num = getValidInteger();            
        result *= num;
    }
    return result;
}

// DIVISION

double divide(void) 
{
    double divisor,divident;

    printf("Enter The Divident:");
    divident=getValidInteger();
    printf("Enter The Divisor:");   
    divisor=getValidInteger();

    if(divisor == 0) 
    {
        printf("Error: Cannot divide by zero\n");
        return 0;
    }
    return divident/divisor;
}

// MODULUS 

double modulus(void) 
{
    double divisor,divident;

    printf("Enter The Divident:");
    divident=getValidInteger();
    printf("Enter The Divisor:");   
    divisor=getValidInteger();

    if(divisor == 0) 
    {
        printf("Error: Cannot divide by zero\n");
        return 0;
    }
    return (int)divident % (int)divisor;
}

// SQUARE ROOT

double findSquareRoot(void) 
{
    
    double result;
    printf("Enter a number: ");
    double num=getValidIntput();
    result = sqrt(num);
    return result;
}

//CUBIC ROOT

double findCubicRoot(void) 
{
    double result;
    printf("Enter a number: ");
    double num=getValidIntput();
    result = cbrt(num);
    return result;
}

//POWER

double power() 
{
    double base, exponent, result = 1;
    printf("Enter base number: ");
    base=getValidIntput();
    printf("Enter exponent: ");
    exponent=getValidIntput();

    for(int i = 0; i < exponent; i++)
    {
        result *= base;
    }
    return result;
}

//FACTORIAL

double factorial(void) 
{
    double n, result = 1;
    printf("Enter a number: ");
    n=getValidIntput();
    for (int i = 1; i <= n; i++) 
    {
        result *= i;
    }
    return result;
}

// MAIN APPLICATION

int main() 
{
    char choice;
    double result;
    int operation,n,flag;
    
    printf("\nAvailable Operations\n1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n5.Modulus\n6.Square Root\n7.Cubic Root\n8.Exponentiation(Power Of A Number)\n9.Factorial Of A Number\n10.Exit\n");
    do
    {
        flag=1;
        printf("\nWhat operation would you like to perform ?\nOperation:");
        operation=getValidInteger();

        switch(operation) 
        {
            case 1:         
                printf("\nEnter the number of numbers: ");
                n=getValidInteger();
                result = add(n);
                if(flag) printf("Result: %lf\n", result);
                if(result == 0) flag = 0;
                break;

            case 2:
                printf("\nEnter the number of numbers: ");
                n=getValidInteger();
                result = subtract(n);
                if(flag) printf("Result: %lf\n", result);
                if(result == 0) flag = 0;
                break;
                
            case 3:
                printf("\nEnter the number of numbers: ");
                n=getValidInteger();
                result = multiply(n);
                if(flag) printf("Result: %lf\n", result);
                if(result == 0) flag = 0;
                break;
                
            case 4:
                result = divide();
                printf("\nQuotient: %lf\n",result);
                if(result == 0) flag = 0;
                break;
                
            case 5:
                result = modulus();
                printf("\nRemainder: %lf\n",result);
                if(result == 0) flag = 0;
                break;
                
            case 6:
                result = findSquareRoot();
                printf("\nSquare Root: %lf\n",result);
                if(result == 0) flag = 0;
                break;
                
            case 7:
                result = findCubicRoot();
                printf("\nCubic Root: %lf\n",result);
                if(result == 0) flag = 0;
                break;
                
            case 8:
                result = power();
                printf("\nResult: %lf\n",result);
                if(result == 0) flag = 0;
                break;
                
            case 9:
                result=factorial();
                printf("\nFactorial: %lf\n",result);
                if(result == 0) flag = 0;
                break;
                
            case 10:                
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
