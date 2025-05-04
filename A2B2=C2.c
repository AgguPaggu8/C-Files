#include <stdio.h>
#include <math.h>

int main(){
    double a, b, c;
    printf("Today we will calculte the hypotenuse of a right angled triangle!\n");
    printf("Pyth Theorem - A*A + B*B = C*C\n");
    printf("Enter side A:");
    scanf("%lf", &a);
    printf("Enter side B:");
    scanf("%lf", &b);
    c = sqrt(a*a + b*b);
    printf("\nSide C =%.0lf", c);
    return 0;
}