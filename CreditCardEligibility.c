#include <stdio.h>

int main(){
    double age;
    printf("Hello! and welcome to Kalia Bankers[Credit Card Page]!\n");
    printf("Please enter your age to check for eligibility:\n");
    scanf("%lf", &age);
    if(age > 18){
        printf("Congratulations! You are eligible for a credit card!");
    }
        else if (age < 18){
            printf("Sorry! You are not eligible for a credit card yet!"); 
        }
        else if(age == 18){
            printf("Congratulations! You are just young enough to be eligible for a credit card!");
        }
    return 0;
}