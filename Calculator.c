#include <stdio.h>

int main() {
    double num1, num2, result;
    char operator;
    char choice;

    do {
        // 1. Take input
        printf("Enter first number: ");
        scanf("%lf", &num1);

        printf("Enter an operator (+, -, *, /): ");
        scanf(" %c", &operator); // space before %c is important!

        printf("Enter second number: ");
        scanf("%lf", &num2);

        // 2. Perform calculation
        switch(operator) {
            case '+':
                result = num1 + num2;
                printf("Result: %.2lf\n", result);
                break;
            case '-':
                result = num1 - num2;
                printf("Result: %.2lf\n", result);
                break;
            case '*':
                result = num1 * num2;
                printf("Result: %.2lf\n", result);
                break;
            case '/':
                if (num2 != 0)
                    result = num1 / num2;
                else {
                    printf("Error: Division by zero!\n");
                    break;
                }
                printf("Result: %.2lf\n", result);
                break;
            default:
                printf("Error: Invalid operator!\n");
        }

        // 3. Ask if user wants to continue
        printf("Do you want to calculate again? (y/n): ");
        scanf(" %c", &choice);

    } while(choice == 'y' || choice == 'Y');

    printf("Thank you for using the calculator!\n");

    return 0;
}
