#include <stdio.h>

int main(){

    char operator;
    int num1;
    int num2;
    double result;

    printf("\nPlease enter an operator (+, -, *, /):\n");
    scanf(" %c", &operator);

    printf("\nPlease enter number 1:\n");
    scanf("%d", &num1);

    printf("\nPlease enter number 2:\n");
    scanf("%d", &num2);

    if(operator == '+'){
        result = num1 + num2;

        printf("The result is:\n");
        printf("%.2lf", result);

    }
    if(operator == '-'){

        result = num1 - num2;

        printf("The result is:\n");
        printf("%.2lf", result);
    }
    if(operator == '*'){

        result = num1 * num2;
        
        printf("The result is:\n");
        printf("%.2lf", result);
    }
    if(operator == '/'){

        result = num1 / num2;

        printf("The result is:\n");
        printf("%.2lf", result);
    }
    else{
        printf("You have entered an invalid operator");
    }

    return 0;
}