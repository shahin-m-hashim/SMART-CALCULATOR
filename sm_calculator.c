#include <stdio.h>
#include<stdlib.h>
#include<math.h>
#include<ctype.h>
#include<string.h>

// INTPUT VALIDATION - INTEGER //

int getValidInput()
{

    char input[100];
    int validInput;
    while (1) 
    {
        scanf("%s", input);
        int i;
        for (i = 0; i < strlen(input); i++) 
        {
            if (!isdigit(input[i])) 
            {
                printf("\nError: Invalid input.Please enter a valid operation:");
                break;
            }
        }
        if (i == strlen(input)) 
        {
            validInput = atoi(input);
            break;
        }
    }
    return validInput;
}

// ADDITION 

double add(int n) 
{
    double result = 0, num;
    for(int i = 0; i < n; i++) 
    {
        printf("Enter number %d: ", i+1);
        num = getValidInput();
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
//         num = getValidIntput();
//         result -= num;
//     }
//     return result;
// }

// MULTIPLICATION - NEEDS FIXING

// double multiply(int n) 
// {
//     double result = 0, num;
//     for(int i = 0; i < n; i++) 
//     {
//         printf("Enter number %d: ", i+1);
//         num = getValidIntput();           
//         result *= num;
//     }
//     return result;
// }

// DIVISION

double divide(void) 
{
    double divisor,divident;

    printf("Enter The Divident:");
    divident=getValidInput();
    printf("Enter The Divisor:");   
    divisor=getValidInput();

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
    divident=getValidInput();
    printf("Enter The Divisor:");   
    divisor=getValidInput();

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
    double num=getValidInput();
    result = sqrt(num);
    return result;
}

//CUBIC ROOT

double findCubicRoot(void) 
{
    double result;
    printf("Enter a number: ");
    double num=getValidInput();
    result = cbrt(num);
    return result;
}

//POWER

double power() 
{
    double base, exponent, result = 1;
    printf("Enter base number: ");
    base=getValidInput();
    printf("Enter exponent: ");
    exponent=getValidInput();

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
    n=getValidInput();
    for (int i = 1; i <= n; i++) 
    {
        result *= i;
    }
    return result;
}

//TRIGNOMETRIC FUNCTIONS 

double TrigFunction()
{
    char ch;
    int choice,flag;
    double input,result,radians; 
    printf("1.Sin\n2.Cos\n3.Tan\n4.Sin Inverse\n5.Cos Inverse\n6.Tan Inverse\n7.Sec\n8.Cosec\n9.Cot");
    do
    {
        flag=1;
        printf("\nSelect a Trigonometric Function:");
        choice=getValidInput();
        switch(choice)
        {
            case 1:
                printf("Enter the angle in degrees: ");
                input=getValidInput();
                radians = input * (M_PI / 180);
                result = sin(radians);
                printf("The result in radians is: %lf\n", result);
                printf("The result in degrees is: %lf\n", result * (180 / M_PI));
                if(result == 0) flag = 0;
                break;
            case 2:
                printf("Enter the angle in degrees: ");
                input=getValidInput();
                radians = input * (M_PI / 180);
                result = cos(radians);
                printf("The result in radians is: %lf\n", result);
                printf("The result in degrees is: %lf\n", result * (180 / M_PI));
                if(result == 0) flag = 0;
                break;
            case 3:
                printf("Enter the angle in degrees: ");
                input=getValidInput();
                radians = input * (M_PI / 180);
                result = tan(radians);
                if(input==90 || input==270)
                {
                    printf("MATHEMATICAL ERROR\n");
                    printf("The result is not defined\n");
    
                }
                else
                {
                    printf("The result in radians is: %lf\n", result);
                    printf("The result in degrees is: %lf\n", result * (180 / M_PI));
                }
                break;
            case 4:
                printf("Enter the angle in degrees: ");
                input=getValidInput();
                result = asin(input);
                if(input>1)
                {
                    printf("MATHEMATICAL ERROR\n");
                    printf("The result in radians is: %lf\n", result);
                    printf("The result in degrees is: %lf\n", result * (180 / M_PI));
                }
                else
                {
                    printf("The result in radians is: %lf\n", result);
                    printf("The result in degrees is: %lf\n", result * (180 / M_PI));
                }
                if(result == 0) flag = 0;
                break;
            case 5:
                printf("Enter the angle in degrees: ");
                input=getValidInput();
                result = acos(input);
                if(input>1)
                {
                    printf("MATHEMATICAL ERROR\n");
                    printf("The result in radians is: %lf\n", result);
                    printf("The result in degrees is: %lf\n", result * (180 / M_PI));
                }
                else
                {
                    printf("The result in radians is: %lf\n", result);
                    printf("The result in degrees is: %lf\n", result * (180 / M_PI));
                }
                if(result == 0) flag = 0;
                break;
            case 6:
                printf("Enter the angle in degrees: ");
                input=getValidInput();
                result = atan(input);
                if(input>=1)
                {
                    printf("MATHEMATICAL ERROR\n");
                    printf("The result in radians is: %lf\n", result);
                    printf("The result in degrees is: %lf\n", result * (180 / M_PI));
                }
                else
                {
                    printf("The result in radians is: %lf\n", result);
                    printf("The result in degrees is: %lf\n", result * (180 / M_PI));
                }
                if(result == 0) flag = 0;
                break;
            case 7:
                printf("Enter the angle in degrees: ");
                input=getValidInput();
                radians = input * (M_PI / 180);
                result = 1 / cos(radians);
                printf("The result in radians is: %lf\n", result);
                printf("The result in degrees is: %lf\n", result * (180 / M_PI));
                if(cos(radians) == 0) flag = 0;
            break;
            case 8:
                printf("Enter the angle in degrees: ");
                input=getValidInput();
                radians = input * (M_PI / 180);
                result = 1 / sin(radians);
                printf("The result in radians is: %lf\n", result);
                printf("The result in degrees is: %lf\n", result * (180 / M_PI));
                if(sin(radians) == 0) flag = 0;
                break;
            case 9:
                printf("Enter the angle in degrees: ");
                input=getValidInput();
                radians = input * (M_PI / 180);
                result = 1 / tan(radians);
                printf("The result in radians is: %lf\n", result);
                printf("The result in degrees is: %lf\n", result * (180 / M_PI));
                if(result == 0) flag = 0;
                break;
            default:
                printf("Error: Invalid option\n");
                return 0;
        }
        if(flag) 
        {
            printf("Do you want to continue The Trignometric Functions(Y/N) ?\nChoice:");
            scanf(" %c", &ch);
            while(ch != 'Y' && ch != 'y' && ch != 'N' && ch != 'n') 
            {
                printf("Error: Invalid input. Please enter either 'Y' or 'N'\nChoice:");
                fflush(stdin);
                scanf(" %c", &ch);
            }
        }
        else
        {
            ch = 'N';
        }
    }while(ch== 'Y' || ch == 'y');
    return 0;
}

// MAIN APPLICATION

int main() 
{
    char choice;
    double result;
    int operation,n,flag;
    
    printf("\nAvailable Operations\n1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n5.Modulus\n6.Square Root\n7.Cubic Root\n8.Exponentiation(Power Of A Number)\n9.Factorial Of A Number\n10.Trigonometric functions\n11.Exit\n");
    do
    {
        flag=1;
        printf("\nWhat operation would you like to perform ?\nOperation:");
        operation=getValidInput();

        switch(operation) 
        {
switch(operation) 
        {
            case 1:         
                printf("\nEnter the number of numbers: ");
                n=getValidInput();
                result = add(n);
                if(flag) printf("Result: %lf\n", result);
                if(result == 0) flag = 0;
                break;

            case 2:
                result = subtract();
                if(flag) printf("Result: %lf\n", result);
                if(result == 0) flag = 0;
                break;
        
            case 3:
                printf("\nEnter the number of numbers: ");
                n=getValidInput();
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
                TrigFunction();
                if(result == 0) flag = 0;
                break;
                
            case 11:                
                printf("Exiting The Program");
                exit(0);
                
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
