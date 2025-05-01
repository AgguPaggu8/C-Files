#include <stdio.h>
int main(){
    char x;
    float a,b;
     printf("Enter the expression: ");
     if (scanf("%f %c %f", &a, &x, &b) != 3) {
         printf("Invalid input format.\n");
         return 1;
     }
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