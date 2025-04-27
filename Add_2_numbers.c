#include <stdio.h>
int main(){

    int a;
    int b;

    printf("\nProvide number a\n");
    scanf("%d", &a);

    printf("\nProvide number b\n");
    scanf("%d", &b);

    int x = a * b;
    printf("\nThe addition of your numbers is %d\n", x);

    return 0;
}