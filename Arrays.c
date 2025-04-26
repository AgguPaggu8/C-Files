#include <stdio.h>

int main(){

    double prices[3];
    prices[0] = 5;
    prices[1] = 10;
    prices[2] = 15;

    printf("$%.2lf", prices[1]);


    return 0;
}