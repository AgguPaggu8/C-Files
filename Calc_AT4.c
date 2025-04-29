#include <stdio.h>
int main(){
    char x;
    float a,b;
    printf("\nPlease enter an operator (+,-,*,/)");
    scanf(" %c", &x);
    if (x != '+' && x != '-' && x != '*' && x != '/') {
        printf("Please input a valid operator");
        return 0;
    }
    printf("\nInput number 1:");
    scanf("%f", &a);
    printf("\nInput number 2:");
    scanf("%f", &b);
    switch(x){
        case '+': printf("Result:%.2f\n", a + b); break;
        case'-': printf("Result:%.2f\n", a - b); break;
        case '*': printf("Result:%.2f\n", a * b); break;
        case '/': if (b != 0)
        printf("Result:%.2f\n", a / b);
        else printf("\nDivision by 0... really?");
        break;
    }
    return 0;
}