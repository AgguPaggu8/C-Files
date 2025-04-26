#include <stdio.h>

int main(){

    float GPA = 3.9;
    float gas = 98.8948738974773649747;
    float temp = 36;

    printf("My GPA is %.1f\n", GPA); /* the %.1f is basically float and only 1 digit after decimal
    if we dont put .1, we will get 6 digits after decimal */
    printf("The price for gas in our area is %.15f\n", gas);
    printf("The temperate here is %.0f degrees celcius\n", temp);

    return 0;
}